#include <iostream>
#include "rtklib.h"
using namespace std;

int main()
{
	cout << "Starting..." << endl;
	rtksvr_t *rtksvr;
	rtksvrinit(rtksvr);

	int SvrCycle = 10;
	int SvrBuffSize = 32768;
	int strs[MAXSTRRTK] = {0, 1, 2};
	char *paths[8];
	int Format[] = {0, 1, 2};
	int NavSelect = 0;
	char *cmds[] = {0};
	char *cmds_periodic[] = {0};
	char *rcvopts[3] = {0};
	int NmeaCycle = 5000;
	int NmeaReq = 1;
	double nmeapos[] = {0.0,
						0.0,
						0.0};
	prcopt_t *prcopt;
	solopt_t *solopt;
	stream_t *moni;
	char *errmsg[20148];

	rtksvrstart(rtksvr, SvrCycle, SvrBuffSize, strs, paths, Format, NavSelect, cmds, rcvopts, NmeaCycle, NmeaReq, nmeapos, prcopt, solopt, moni);
	cout << errmsg << endl;
	return 1;
}
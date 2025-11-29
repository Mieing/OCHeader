@interface EdgeComputingRtReportCache : NSObject

- (BOOL)cache:(id)a0 withLogID:(unsigned int)a1 withContent:(id)a2;
- (id)read;
- (id)keyForRtReportData:(id)a0 withLogID:(id)a1;
- (void)clear;

@end

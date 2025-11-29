@interface ScanOpenIMRoomReporter : NSObject <PBMessageObserverDelegate>

+ (void)initialize;

- (id)init;
- (void)reportJoinOpenIMRoom:(id)a0 openIMContext:(id)a1 getA8KeyScene:(unsigned int)a2 subScene:(unsigned int)a3;
- (int)getReportType:(id)a0;
- (BOOL)isNormalRoomUrl:(id)a0;
- (BOOL)isMultiRoomUrl:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onScanOpenIMReportCGIEnd:(id)a0;

@end

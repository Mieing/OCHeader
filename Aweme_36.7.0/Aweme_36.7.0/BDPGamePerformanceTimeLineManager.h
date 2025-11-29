@class BDPGamePerfModel;

@interface BDPGamePerformanceTimeLineManager : NSObject

@property (retain, nonatomic) BDPGamePerfModel *model;
@property (nonatomic) long long firstUserCloseAppTs;
@property (nonatomic) BOOL isFlushed;

+ (id)sharedManager;

- (void)closeWithUniqueID:(id)a0;
- (void)recordBlankScreenWithParams:(id)a0;
- (void)recordDrawCallBlockWithParams:(id)a0;
- (void)recordPerformanceWithParams:(id)a0;
- (double)avgWithCurrentValue:(double)a0 newValue:(double)a1 times:(long long)a2;
- (void)flushWithReason:(id)a0 uniqueID:(id)a1;
- (void)recordMemoryWithParams:(id)a0;
- (void)recordCPUWithParams:(id)a0;
- (void)recordBatteryWithParams:(id)a0;
- (void)pauseWithUniqueID:(id)a0;
- (void)resumeWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (void)resetData;
- (BOOL)canRecord;

@end

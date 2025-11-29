@class BDARVPlayerContext, NSString;
@protocol BDARVPlayerState;

@interface BDARVPlayerMonitor : NSObject <BDARVVideoEventEmiter>

@property (retain, nonatomic) BDARVPlayerContext *context;
@property (weak, nonatomic) id<BDARVPlayerState> stateSubject;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)monitorCategoryData;
- (id)monitorExtraData;
- (BOOL)supportEvent:(id)a0;
- (void)emitEvnet:(id)a0 payload:(id)a1;
- (id)supportEvents;
- (void)sendMonitorWithEvent:(id)a0;
- (void)playerPlayEffectCheck;
- (void)playerLoadError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate:(id)a0;

@end

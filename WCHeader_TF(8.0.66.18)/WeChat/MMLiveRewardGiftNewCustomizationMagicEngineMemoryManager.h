@class MMLiveRewardGiftNewCustomizationMagicRewardResManager, MMLiveMagicEngineMemoryMonitorTask, MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager;

@interface MMLiveRewardGiftNewCustomizationMagicEngineMemoryManager : NSObject

@property (retain, nonatomic) MMLiveMagicEngineMemoryMonitorTask *magicEngineMemMonitorTask;
@property (weak, nonatomic) MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager *currRewardMemoryManager;
@property (weak, nonatomic) MMLiveRewardGiftNewCustomizationMagicRewardResManager *currRewardResManager;

- (id)init;
- (void)initData;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateCurrentRewardMemoryManager:(id)a0;
- (void)updateCurrentRewardResManager:(id)a0;
- (void)checkMagicEngineMemory;
- (void)createEngineMemoryMonitorTask;
- (double)getRecentAverageFootPrintMemoryPercent:(id)a0;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)a0;
- (void)updateMagicEngineMemoryUseState;
- (long long)getCurrentMagicEngineMemoryUseState;
- (void)checkListeningRewardManagers;
- (void)onLiveTask:(id)a0 didCollectMetricsInfo:(id)a1;
- (void)onAllMagicRewardResourceStateCheckFinished;
- (void)onHasMagicRewardResourceStateChecking;
- (void)onAllMagicRewardResMemoryUnLoaded;
- (void)onHasMagicRewardResMemoryLoaded;
- (void).cxx_destruct;

@end

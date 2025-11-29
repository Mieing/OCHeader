@class NSString, NSMutableDictionary;

@interface MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager : NSObject <MMLiveTaskMgrExt>

@property (retain, nonatomic) NSMutableDictionary *monitorTaskDict;
@property (nonatomic) BOOL hasResMemoryLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorMagicResMemoryWithView:(id)a0 enableAutoUnLoad:(BOOL)a1;
- (void)cancelMonitor:(id)a0;
- (BOOL)isCurrentHasResMemoryLoaded;
- (id)createMonitorTaskForRewardView:(id)a0 enableAutoUnLoad:(BOOL)a1;
- (id)getUniqueKeyForView:(id)a0;
- (double)getRecentAverageFootPrintMemoryPercent:(id)a0;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)a0;
- (void)updateResMemoryLoadedState;
- (BOOL)getCurrentResMemoryLoadedState;
- (void)onLiveTask:(id)a0 didCollectMetricsInfo:(id)a1;
- (void).cxx_destruct;

@end

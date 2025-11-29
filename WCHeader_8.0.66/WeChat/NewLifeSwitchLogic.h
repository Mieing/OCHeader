@interface NewLifeSwitchLogic : NSObject <IExptServiceExt>

@property (nonatomic) BOOL mainSwitch;
@property (nonatomic) BOOL isNewLifeTagStreamOpened;
@property (nonatomic) long long contentReddotStrategy;

- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)initFixedXLabSwitch;
- (void)initFlexibleXLabSwitch;
- (BOOL)checkNewLifeTagStreamOpened;
- (BOOL)checkMainSwitchValueChanged;
- (BOOL)mainSwitchRealTimeResult;
- (BOOL)enableTopRecommendContentReddotInFind;
- (BOOL)enablePostToNewLifeFromSns;
- (BOOL)enablePostGuideByTimelineStream;
- (BOOL)enablePostGuideByTimelineDetail;
- (BOOL)enablePostGuideByTimelineActionSheet;
- (long long)imageDisplayType;
- (BOOL)enableFinderLike;
- (BOOL)enablePostAssist;
- (BOOL)enableOptimizeDebounceSyncAction;
- (BOOL)enableOptimizeUploadSync;
- (void)onExptItemListChange;
- (void)onNewLifeSwitchChanged:(BOOL)a0;

@end

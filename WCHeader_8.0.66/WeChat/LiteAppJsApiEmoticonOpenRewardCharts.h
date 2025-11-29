@class NSString, EmoticonStoreItem, EmotionRewardResponseInfo;

@interface LiteAppJsApiEmoticonOpenRewardCharts : LiteAppJsApi

@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (retain, nonatomic) EmotionRewardResponseInfo *rewardInfo;
@property (nonatomic) BOOL didOpenChartsVC;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)openChartsVC;
- (void)endWithOK;
- (void)onGetEmotionRewardFinishedWithPid:(id)a0 RewardInfo:(id)a1;
- (id)getViewController;
- (void).cxx_destruct;

@end

@class NSString, EmoticonStoreItem, EmotionRewardResponseInfo;

@interface LiteAppJsApiEmoticonOpenStoreBegReward : LiteAppJsApi <IStoreEmotionRewardExt>

@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (nonatomic) int extranceScene;
@property (retain, nonatomic) EmotionRewardResponseInfo *rewardInfo;
@property (nonatomic) BOOL didOpenBegVC;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)openBegVC;
- (void)endWithOK;
- (void)onGetEmotionRewardFinishedWithPid:(id)a0 RewardInfo:(id)a1;
- (id)getViewController;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEShowPlayletIAACoinRewardManager : NSObject <AWEShowPlayletIAACollectTaskRewardManagerProtocol>

@property (nonatomic) BOOL hasGetPlayletGrowthCoinReward;
@property (nonatomic) BOOL hasGetIaaPlayletRewardFromHot;
@property (nonatomic) long long watchedIAAPreviewVideoTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)showWidgetCoinTaskRewardCustomView:(id)a0;
- (id)getTaskPageParamsDic:(id)a0 params:(id)a1;
- (void)updateIncentivePendantPlayletInfo:(id)a0 withObject:(id)a1 insertParamsDict:(id)a2;
- (id)getPlayletBottomBarTrackParamsDic:(id)a0;

@end

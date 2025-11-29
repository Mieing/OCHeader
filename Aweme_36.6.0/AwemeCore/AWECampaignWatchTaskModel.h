@class NSString, NSArray, AWECampaignEvadeRuleModel, AWECampaignLynxPendantViewModel, NSDictionary, AWECampaignTaskRuleMatcherModel, AWECampaignFloatViewModel, AWECampaignTaskStateActionModel;

@interface AWECampaignWatchTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double taskValidInterval;
@property (nonatomic) long long countDownDuration;
@property (nonatomic) long long countDownInterval;
@property (nonatomic) long long detailRefresh;
@property (nonatomic) BOOL detailRefreshIgnoreOnlyDetailPage;
@property (nonatomic) unsigned long long cacheStrategy;
@property (nonatomic) BOOL disableAutoClosePendant;
@property (nonatomic) BOOL needSubmit;
@property (copy, nonatomic) NSArray *triggers;
@property (copy, nonatomic) NSArray *scene;
@property (copy, nonatomic) NSArray *stateOutputer;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) AWECampaignFloatViewModel *floatViewModel;
@property (retain, nonatomic) AWECampaignLynxPendantViewModel *lynxPendantViewModel;
@property (retain, nonatomic) AWECampaignTaskRuleMatcherModel *taskRuleMathcerModel;
@property (retain, nonatomic) AWECampaignEvadeRuleModel *evadeRuleModel;
@property (retain, nonatomic) AWECampaignTaskStateActionModel *taskActionModel;
@property (copy, nonatomic) NSDictionary *logParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (id)cacheStrategyJSONTransformer;
- (void).cxx_destruct;
- (id)init;

@end

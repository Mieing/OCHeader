@class NSArray, AWECampaignVideoStateModel, NSString;

@interface AWECampaignTaskRuleMatcherModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *showView;
@property (copy, nonatomic) NSArray *page;
@property (retain, nonatomic) AWECampaignVideoStateModel *videoStateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

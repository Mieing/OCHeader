@class NSString, NSArray, NSDictionary;

@interface AWECampaignTaskInstanceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *rewardList;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *popup;
@property (copy, nonatomic) NSDictionary *taskInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

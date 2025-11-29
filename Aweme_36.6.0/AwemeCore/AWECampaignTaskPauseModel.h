@class AWECampaignActionToastModel, NSString;

@interface AWECampaignTaskPauseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignActionToastModel *actionToastModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

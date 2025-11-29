@class NSString, AWECampaignTaskFinishModel, AWECampaignTaskPauseModel;

@interface AWECampaignTaskStateActionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignTaskFinishModel *taskFinishModel;
@property (retain, nonatomic) AWECampaignTaskPauseModel *taskPauseModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

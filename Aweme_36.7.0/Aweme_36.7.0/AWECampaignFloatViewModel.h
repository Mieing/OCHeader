@class AWECampaignCapsuleModel, NSString, AWECampaignFinishedTimerModel, AWECampaignRunningTimerModel;

@interface AWECampaignFloatViewModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignCapsuleModel *capsuleConfig;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) AWECampaignRunningTimerModel *runningTimerModel;
@property (retain, nonatomic) AWECampaignFinishedTimerModel *finishedTimerModel;
@property (nonatomic) BOOL dismissWithoutFBSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

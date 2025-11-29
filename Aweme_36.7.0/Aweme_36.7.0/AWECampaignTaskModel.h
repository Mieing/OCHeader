@class NSString, AWECountDownViewConfigModel;

@interface AWECampaignTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *campaignTaskId;
@property (copy, nonatomic) NSString *campaignTaskToken;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *campaignTaskType;
@property (copy, nonatomic) NSString *campaignIncompletePopup;
@property (copy, nonatomic) NSString *campaignIncompleteSubtitle;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *isCSRWatchTask;
@property (copy, nonatomic) NSString *campaignExtra;
@property (retain, nonatomic) AWECountDownViewConfigModel *configModel;
@property (copy, nonatomic) NSString *watchSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

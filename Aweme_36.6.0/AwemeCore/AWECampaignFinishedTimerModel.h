@class NSString, AWECampaignClickActionModel;

@interface AWECampaignFinishedTimerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *closeIconURL;
@property (copy, nonatomic) NSString *activitySchema;
@property (nonatomic) long long schemaJumpType;
@property (copy, nonatomic) NSString *clickToastBeforeResp;
@property (copy, nonatomic) NSString *hideToast;
@property (retain, nonatomic) AWECampaignClickActionModel *clickAction;
@property (copy, nonatomic) NSString *foldText;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *lottieUrl;
@property (copy, nonatomic) NSString *lottieMD5;
@property (copy, nonatomic) NSString *fold_icon_url;
@property (nonatomic) long long lottiePlayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

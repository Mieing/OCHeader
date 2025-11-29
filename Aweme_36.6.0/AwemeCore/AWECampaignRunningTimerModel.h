@class NSString, AWECampaignClickActionModel, NSNumber;

@interface AWECampaignRunningTimerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECampaignClickActionModel *clickAction;
@property (copy, nonatomic) NSString *foldText;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *lottieUrl;
@property (copy, nonatomic) NSString *lottieMD5;
@property (copy, nonatomic) NSString *foldIconUrl;
@property (copy, nonatomic) NSString *expandIconUrl;
@property (nonatomic) long long lottiePlayType;
@property (retain, nonatomic) NSNumber *foldAfterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

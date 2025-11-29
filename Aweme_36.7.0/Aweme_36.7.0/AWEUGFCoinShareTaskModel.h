@class NSString, AWEUGFCoinShareCapsuleModel, AWEUGCountDownConfigModel;

@interface AWEUGFCoinShareTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *feedIconUrl;
@property (copy, nonatomic) NSString *shareIconUrl;
@property (copy, nonatomic) NSString *shareIconText;
@property (retain, nonatomic) AWEUGFCoinShareCapsuleModel *capsule;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capsuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, ACCAIGCLoraPersonInfo, ACCAIGCLoraProfileModelV2;

@interface ACCAIGCLoraProfileModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *profileInfo;
@property (retain, nonatomic) ACCAIGCLoraProfileModelV2 *profileInfoList;
@property (nonatomic) long long remainingTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileInfoJSONTransformer;
+ (id)profileInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)loraIdentifier;
- (void).cxx_destruct;

@end

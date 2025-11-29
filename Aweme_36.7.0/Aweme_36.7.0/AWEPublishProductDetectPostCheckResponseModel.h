@class NSString;

@interface AWEPublishProductDetectPostCheckResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *failToast;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) long long remainCount;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

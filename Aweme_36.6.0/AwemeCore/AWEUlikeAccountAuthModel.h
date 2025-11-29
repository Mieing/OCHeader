@class NSString;

@interface AWEUlikeAccountAuthModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *openId;
@property (nonatomic) long long authCode;
@property (copy, nonatomic) NSString *authMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

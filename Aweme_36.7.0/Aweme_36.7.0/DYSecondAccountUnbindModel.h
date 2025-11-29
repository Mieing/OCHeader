@class NSString, NSArray;

@interface DYSecondAccountUnbindModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *descUrl;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

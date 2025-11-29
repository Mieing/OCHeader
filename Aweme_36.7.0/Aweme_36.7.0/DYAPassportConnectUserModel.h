@class NSArray, NSString;

@interface DYAPassportConnectUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *connectAccounts;
@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descUrl;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectAccountsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

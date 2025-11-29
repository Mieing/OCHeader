@class NSString;

@interface DYVerifyQAModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *not_login_ticket;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

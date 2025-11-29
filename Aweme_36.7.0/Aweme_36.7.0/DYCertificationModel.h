@class NSString;

@interface DYCertificationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *descMessage;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (copy, nonatomic) NSString *identityTicket;
@property (copy, nonatomic) NSString *authTicket;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *emailCodeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

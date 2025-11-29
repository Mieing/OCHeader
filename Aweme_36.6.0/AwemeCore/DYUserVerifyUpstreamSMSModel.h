@class NSString;

@interface DYUserVerifyUpstreamSMSModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *channelMobile;
@property (copy, nonatomic) NSString *smsContent;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *mobileTicket;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

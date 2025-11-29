@class NSString;

@interface DYVerifyIDModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sharkTicket;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *verifyMobile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

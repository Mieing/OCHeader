@class NSString;

@interface DYVerifySMSModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *mobile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

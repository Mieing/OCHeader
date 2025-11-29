@class NSString;

@interface DYUserVerifyPasswordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *profileKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

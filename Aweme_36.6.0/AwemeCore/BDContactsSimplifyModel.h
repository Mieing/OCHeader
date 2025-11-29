@class NSString;

@interface BDContactsSimplifyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *compositeName;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *uniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

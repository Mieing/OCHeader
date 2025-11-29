@class NSString;

@interface DYAOperStaffAccountModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long passwordStatus;
@property (copy, nonatomic) NSString *staffSecUid;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) long long countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, NSString;

@interface AWEOpenAuthV3VirtualInfoData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *defaultIdentities;
@property (nonatomic) long long defaultIdentityMaxCount;
@property (nonatomic) long long identityMaxCount;
@property (copy, nonatomic) NSArray *userCreateIdentities;
@property (copy, nonatomic) NSString *userLastSelecteIdentityId;
@property (nonatomic) long long hitExperiment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultIdentitiesJSONTransformer;
+ (id)userCreateIdentitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

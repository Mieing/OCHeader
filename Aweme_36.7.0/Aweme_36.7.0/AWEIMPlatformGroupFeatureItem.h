@class NSString, NSArray, NSDictionary;

@interface AWEIMPlatformGroupFeatureItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long featureType;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *authorizedDisplayingRoles;
@property (copy, nonatomic) NSArray *authorizedEditingRoles;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

@end

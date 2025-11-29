@class NSString;

@interface IESECShopDisplayNameInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *baseName;
@property (copy, nonatomic) NSString *shopType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

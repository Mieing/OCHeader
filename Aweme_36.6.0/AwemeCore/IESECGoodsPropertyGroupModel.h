@class NSString, NSArray;

@interface IESECGoodsPropertyGroupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSArray *propertyItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

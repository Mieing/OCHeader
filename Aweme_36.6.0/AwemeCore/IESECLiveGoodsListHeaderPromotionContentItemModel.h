@class NSString, NSArray;

@interface IESECLiveGoodsListHeaderPromotionContentItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSString *schemaParamType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentItemsJSONTransformer;
+ (id)defaultContentItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSNumber, NSArray;

@interface IESECShopRecommendGoodsBaseInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *sales;
@property (copy, nonatomic) NSArray *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end

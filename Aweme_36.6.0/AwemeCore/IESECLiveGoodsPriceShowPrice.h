@class NSArray, NSString, IESECLiveGoodsMinPrice;

@interface IESECLiveGoodsPriceShowPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsMinPrice *minPrice;
@property (retain, nonatomic) NSArray *descriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

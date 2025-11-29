@class NSArray, IESECLiveGoodsBargainPriceDesc, NSString;

@interface IESECLiveGoodsBargainPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *flipPrice;
@property (retain, nonatomic) IESECLiveGoodsBargainPriceDesc *priceDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flipPriceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

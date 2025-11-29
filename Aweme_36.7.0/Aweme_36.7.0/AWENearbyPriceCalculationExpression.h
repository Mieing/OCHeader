@class AWENearbyPriceExpression, AWENearbyPriceDiffExpression, NSString;

@interface AWENearbyPriceCalculationExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyPriceExpression *priceExpression;
@property (retain, nonatomic) AWENearbyPriceDiffExpression *priceDiffExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

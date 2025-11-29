@class NSString, AWENearbyPriceCalculationExpression, AWENearbyMarketingExpression;

@interface AWENearbySingleProductExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyPriceCalculationExpression *priceCalculationExpression;
@property (retain, nonatomic) AWENearbyMarketingExpression *marketingExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

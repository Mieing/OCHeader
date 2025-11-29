@class AWEGrouponPriceExpression, AWEGrouponPriceDiffExpression, NSString;

@interface AWEGrouponPriceCalculationExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponPriceExpression *priceExpression;
@property (retain, nonatomic) AWEGrouponPriceDiffExpression *priceDiffExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

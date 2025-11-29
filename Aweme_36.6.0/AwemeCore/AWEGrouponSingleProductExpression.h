@class AWEGrouponPriceCalculationExpression, AWEGrouponMarketingExpression, NSString;

@interface AWEGrouponSingleProductExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponPriceCalculationExpression *priceCalculationExpression;
@property (retain, nonatomic) AWEGrouponMarketingExpression *marketingExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

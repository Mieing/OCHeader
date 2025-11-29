@class NSString, AWEGrouponSecondPrice;

@interface AWEGrouponPriceExpression : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *currencySign;
@property (nonatomic) double finalPrice;
@property (copy, nonatomic) NSString *finalPricePostfix;
@property (retain, nonatomic) AWEGrouponSecondPrice *secondPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

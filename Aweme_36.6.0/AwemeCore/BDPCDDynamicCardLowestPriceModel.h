@class NSString;

@interface BDPCDDynamicCardLowestPriceModel : BDPCDDynamicCardAtomicModel

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *discount;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *currentPricePrefix;

- (id)priceTextWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

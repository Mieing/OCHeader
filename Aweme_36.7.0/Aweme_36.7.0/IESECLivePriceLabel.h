@class NSNumber, NSAttributedString, IESECPriceStringBuilder;

@interface IESECLivePriceLabel : UILabel

@property (copy, nonatomic) NSAttributedString *lastPrice;
@property (copy, nonatomic) NSNumber *originPrice;
@property (retain, nonatomic) IESECPriceStringBuilder *configuration;
@property (copy, nonatomic) id /* block */ price;
@property (copy, nonatomic) id /* block */ prefix;
@property (copy, nonatomic) id /* block */ suffix;
@property (copy, nonatomic) id /* block */ addCrossLine;
@property (copy, nonatomic) id /* block */ hideIfNeed;
@property (copy, nonatomic) id /* block */ useSuffix;
@property (copy, nonatomic) id /* block */ maxPrice;
@property (copy, nonatomic) id /* block */ waitToShowPrice;

- (void).cxx_destruct;
- (id /* block */)build;

@end

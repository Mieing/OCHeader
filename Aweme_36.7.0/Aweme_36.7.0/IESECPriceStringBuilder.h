@class NSNumber;

@interface IESECPriceStringBuilder : IESECPriceStringConfiguration

@property (copy, nonatomic) NSNumber *originPrice;
@property (copy, nonatomic) id /* block */ buildPriceBlock;
@property (copy, nonatomic) id /* block */ buildPrefixBlock;
@property (copy, nonatomic) id /* block */ buildSuffixBlock;
@property (copy, nonatomic) id /* block */ useSuffixBlock;
@property (copy, nonatomic) id /* block */ addCrossLineBlock;
@property (copy, nonatomic) id /* block */ hideIfNeedBlock;
@property (copy, nonatomic) id /* block */ maxPriceBlock;
@property (copy, nonatomic) id /* block */ waitToShowPriceBlock;
@property (copy, nonatomic) id /* block */ price;
@property (copy, nonatomic) id /* block */ prefix;
@property (copy, nonatomic) id /* block */ suffix;
@property (copy, nonatomic) id /* block */ addCrossLine;
@property (copy, nonatomic) id /* block */ hideIfNeed;
@property (copy, nonatomic) id /* block */ useSuffix;
@property (copy, nonatomic) id /* block */ maxPrice;
@property (copy, nonatomic) id /* block */ waitToShowPrice;

- (void)removeBlock;
- (id)prefixAttributedString:(id)a0;
- (id)tagAttributedString;
- (id)buildPrice:(id)a0;
- (id)buildPrefix:(id)a0;
- (id)suffixAttributedString:(id)a0;
- (id)buildCrossLinePrice:(id)a0;
- (void).cxx_destruct;
- (id /* block */)build;

@end

@class NSString;

@interface ProductPriceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *originalPrice;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *currentPrefix;
@property (copy, nonatomic) NSString *currentSuffix;

+ (id)descriptor;

- (id)memoryData;
- (id)initWithDict:(id)a0;

@end

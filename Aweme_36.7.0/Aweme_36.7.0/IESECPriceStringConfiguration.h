@class NSString, UIFont;

@interface IESECPriceStringConfiguration : NSObject

@property (nonatomic) BOOL manuallyAjustPrefixBaselineOffset;
@property (nonatomic) double prefixBaselineOffset;
@property (nonatomic) BOOL manuallyAjustSuffixBaselineOffset;
@property (nonatomic) double suffixBaselineOffset;
@property (retain, nonatomic) NSString *dollarTag;
@property (retain, nonatomic) UIFont *dollarTagFont;
@property (retain, nonatomic) UIFont *integerFont;
@property (retain, nonatomic) UIFont *decimalFont;
@property (retain, nonatomic) UIFont *prefixFont;
@property (retain, nonatomic) UIFont *suffixFont;
@property (nonatomic) BOOL ignoreSpaceBtweenTagAndPrice;
@property (nonatomic) long long decimalPlaces;
@property (nonatomic) unsigned long long roundingMode;

- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)init;

@end

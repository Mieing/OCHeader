@interface IESECLivePriceTextConfigModel : IESECLiveBaseElementConfigModel

@property (nonatomic) double dollarTagFontSize;
@property (nonatomic) double integerFontSize;
@property (nonatomic) double decimalFontSize;
@property (nonatomic) double prefixFontSize;
@property (nonatomic) double suffixFontSize;

+ (id)JSONKeyPathsByPropertyKey;

@end

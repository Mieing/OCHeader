@interface IESECRelationPriceAndSalesConfig : NSObject

@property (nonatomic) double priceHeight;
@property (nonatomic) double integerFontSize;
@property (nonatomic) double iphone5AlikeIntergerFontSize;
@property (nonatomic) double decimalFontSize;
@property (nonatomic) double prefixFontSize;
@property (nonatomic) double suffixFontSize;
@property (nonatomic) double tagFontSize;
@property (nonatomic) BOOL showSuffix;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL hideSales;
@property (nonatomic) double salesFontSize;
@property (nonatomic) double maxWidth;

@end

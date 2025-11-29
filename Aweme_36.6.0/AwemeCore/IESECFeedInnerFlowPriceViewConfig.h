@class UIColor, UIFont;

@interface IESECFeedInnerFlowPriceViewConfig : NSObject

@property (nonatomic) BOOL shouldHiddenSalesLabel;
@property (nonatomic) BOOL showSuffix;
@property (retain, nonatomic) UIColor *priceTextColor;
@property (retain, nonatomic) UIColor *salesTextColor;
@property (retain, nonatomic) UIFont *salesTextFont;
@property (retain, nonatomic) UIColor *defaultPriceTextColor;
@property (retain, nonatomic) UIFont *priceIntegerFont;
@property (retain, nonatomic) UIFont *priceDecimalFont;

- (void).cxx_destruct;

@end

@class UIColor, UIFont;

@interface MMLiveVerticalTextButtonViewConfig : NSObject

@property (nonatomic) unsigned long long displayType;
@property (nonatomic) double textPadding;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *buttonBgColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL buttonRoundCorner;
@property (retain, nonatomic) UIColor *buttonBlurColor;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) double maxLabelWidth;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end

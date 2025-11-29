@class UIFont, NSString, UIColor, UIImage;

@interface WAWebViewBottomBannerButtonViewModel : MMObject

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *highlightImage;
@property (nonatomic) double maxWitdh;
@property (nonatomic) double buttonTitleSpacing;
@property (nonatomic) double buttonHeight;

- (id)init;
- (double)calculateButtonWidth;
- (void).cxx_destruct;

@end

@class UILabel;

@interface AWEVideoProductRollingLabelView : UIView

@property (retain, nonatomic) UILabel *content;

- (id)contentLabelFont;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (BOOL)enableAdaptLargeFontModeV3;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class UILabel, UIImageView;

@interface MMFinderLiveIconTextSignView : UIView

@property (retain, nonatomic) UILabel *signLabel;
@property (retain, nonatomic) UIImageView *iconView;

+ (struct CGSize { double x0; double x1; })signSizeWithText:(id)a0 font:(id)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGSize { double x0; double x1; })signSizeWithText:(id)a0 font:(id)a1 boundingSize:(struct CGSize { double x0; double x1; })a2 iconWidth:(double)a3;

- (id)init;
- (void)updateWithIconName:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 iconColor:(id)a2;
- (void)updateWithSignText:(id)a0 textColor:(id)a1 bgColor:(id)a2 font:(id)a3;
- (void)updateSelfLayout;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end

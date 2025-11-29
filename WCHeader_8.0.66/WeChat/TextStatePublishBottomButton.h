@class UIImageView;

@interface TextStatePublishBottomButton : UIButton

@property (retain, nonatomic) UIImageView *selectedImageView;

+ (id)buttonWithTitle:(id)a0 imageName:(id)a1;
+ (id)buttonWithTitleAndColor:(id)a0 imageName:(id)a1 color:(id)a2 highLightedColor:(id)a3 disabledColor:(id)a4;

- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)showRedDot;
- (void)hideRedDot;
- (void).cxx_destruct;

@end

@class UIFont, UIImageView, UILabel, UIView;

@interface CAKAlbumSlidingTabButton : UIButton

@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) UIView *circleDot;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *iconTitleLabel;
@property (nonatomic) double iconImageViewRatio;
@property (nonatomic) double buttonWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineX;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (nonatomic) double titlePadding;
@property (nonatomic) BOOL enableSwitchAnimation;

- (double)buttonOriginWidth;
- (void)configureText:(id)a0 image:(id)a1 selectedText:(id)a2 selectedImage:(id)a3;
- (void)setImageAndTitleStyleButton;
- (void)showDot:(BOOL)a0 color:(id)a1;
- (BOOL)isDotShown;
- (void)configureText:(id)a0 imageName:(id)a1 selectedText:(id)a2 selectedImageName:(id)a3;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (id)init;
- (void)layoutSubviews;

@end

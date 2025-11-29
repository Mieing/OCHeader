@class UIColor, NSString, UIImageView, UIImage, MMUIButton, MMUILabel;
@protocol MMDropableTitleViewDelegate;

@interface MMDropableTitleView : MMTitleView <MMDropableTitleViewAbility> {
    UIColor *_buttonBackgroundColor;
    double _arrowImageViewAngle;
    UIImage *_arrowImage;
    UIColor *_arrowImageViewBackgroundColor;
    UIColor *_titleLabelTextColor;
}

@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id<MMDropableTitleViewDelegate> titleViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 buttonBackgroundColor:(id)a1 arrowImageViewAngle:(double)a2;
- (id)initWithTitle:(id)a0 buttonBackgroundColor:(id)a1 arrowImageViewAngle:(double)a2 arrowImage:(id)a3 arrowImageViewBackgroundColor:(id)a4 titleLabelTextColor:(id)a5;
- (void)layoutSubviews;
- (void)initViews;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)setIsEnable:(BOOL)a0;
- (void)rotateArrowWithAnimated:(BOOL)a0;
- (void)laytoutTitleViews;
- (void)onClick:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end

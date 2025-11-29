@class UILayoutGuide, UIImageView, NSLayoutConstraint;

@interface AWEToolTipView : UIView {
    BOOL _shouldAnchorAtTip;
    BOOL _shouldAdjustCenter;
}

@property (retain, nonatomic) NSLayoutConstraint *contentLayoutGuideTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutGuideLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutGuideBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLayoutGuideTrailingConstraint;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long anchorBehavior;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageInherentEdgeInsets;
@property (readonly, nonatomic) UIImageView *leadingImageView;
@property (readonly, nonatomic) UIImageView *trailingImageView;

+ (id)toolTipViewWithContentView:(id)a0 style:(unsigned long long)a1;
+ (id)toolTipViewWithText:(id)a0 font:(id)a1 textColor:(id)a2 style:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (void)layoutSubviews;

@end

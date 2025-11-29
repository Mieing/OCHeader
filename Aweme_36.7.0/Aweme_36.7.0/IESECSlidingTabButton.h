@class UILabel, UIButton, UIImageView, IESECUIBDImageView, UIView, IESECSlidingTabbarView, NSAttributedString;
@protocol IESECSlidingTabButtonLayoutDelegate, IESECSlidingTabConvertible;

@interface IESECSlidingTabButton : UIControl {
    struct CGSize { double width; double height; } _normalStateImageSize;
    struct CGSize { double width; double height; } _selectStateImageSize;
}

@property (weak, nonatomic) IESECSlidingTabbarView *slidingTabbar;
@property (weak, nonatomic) id<IESECSlidingTabButtonLayoutDelegate> layoutDelegate;
@property (copy, nonatomic) NSAttributedString *attributedTxt;
@property (copy, nonatomic) NSAttributedString *selectedAttributedTxt;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (readonly, nonatomic) double indicatorWidth;
@property (nonatomic) struct CGSize { double width; double height; } maxTitleSize;
@property (retain, nonatomic) UIButton *innerButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) IESECUIBDImageView *animatedImageView;
@property (readonly, nonatomic) BOOL isFirstTab;
@property (readonly, nonatomic) BOOL isLastTab;
@property (readonly, nonatomic) BOOL isMiddleTab;
@property (readonly, nonatomic) BOOL isBoundaryTab;
@property (readonly, nonatomic) BOOL isBadgeVisible;
@property (readonly, nonatomic) BOOL enableAnimatedIcon;
@property (readonly, nonatomic) id<IESECSlidingTabConvertible> maker;

+ (id)slidingTabWithMaker:(id /* block */)a0;

- (void)removeBadge;
- (void)configWithMaker:(id)a0;
- (void)setRedDotViewHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })maxSizeForTitle;
- (struct CGSize { double x0; double x1; })sizeForSelectedStateTitle;
- (struct CGSize { double x0; double x1; })sizeForNormalStateTitle;
- (struct CGSize { double x0; double x1; })sizeForCurrentTitle;
- (void)refreshAnimatedImageFrame;
- (void)setBadgeImageURLArray:(id)a0;
- (void)setBadgeLabelWithAttributedString:(id)a0;
- (void)setupAnimatedImageView:(id)a0;
- (void)setAnimatedImageViewSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForSelectedStateImage;
- (struct CGSize { double x0; double x1; })sizeForNormalStateImage;
- (struct CGSize { double x0; double x1; })sizeForCurrentImage;
- (void).cxx_destruct;
- (void)setContentVerticalAlignment:(long long)a0;
- (void)setContentHorizontalAlignment:(long long)a0;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)isViewVisible:(id)a0;
- (id)attributedTitleForState:(unsigned long long)a0;

@end

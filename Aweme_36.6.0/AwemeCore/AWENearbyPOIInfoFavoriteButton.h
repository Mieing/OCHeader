@class UILabel, UIImageView, UIView;

@interface AWENearbyPOIInfoFavoriteButton : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *layoutContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *selectedIconImageView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)updateUIStatus;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class UIImageView, UIView, UILabel, AWENearbyPOIDanmakuModel;

@interface AWENearbyPOIDanmakuItemView : UIView

@property (retain, nonatomic) AWENearbyPOIDanmakuModel *item;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)onTapView:(id)a0;
- (void)configWithItem:(id)a0 index:(long long)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

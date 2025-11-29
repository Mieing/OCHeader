@class UIImageView, AWEECMallSegmentedItem, UIView, AWEBinding, UILabel;

@interface AWEECMallSegmentedItemView : UIView

@property (weak, nonatomic) AWEECMallSegmentedItem *item;
@property (retain, nonatomic) AWEBinding *binding;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *dotView;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ accessibilityElementDidBecomeFocusedBlock;
@property (copy, nonatomic) id /* block */ accessibilityTextBlock;

- (void)refreshView;
- (void)configCell:(id)a0 selected:(BOOL)a1 index:(long long)a2;
- (void)willDisPlay;
- (void)handleRedDot;
- (void)handleImageRadius;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)didEndDisplaying;

@end

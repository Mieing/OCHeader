@class NSString, UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface IESSegmentedItemCell : UICollectionViewCell <IESSegmentedControlItemViewProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ accessibilityElementDidBecomeFocusedBlock;
@property (copy, nonatomic) id /* block */ imageClickBlock;
@property (copy, nonatomic) id /* block */ accessibilityTextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageClick;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)accessibilityElementDidBecomeFocused;

@end

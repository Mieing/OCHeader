@class ACCTCECropRatioOption, NSString, UIImageView, UILabel, CALayer;

@interface ACCCropPickerViewCell : UICollectionViewCell

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CALayer *selectedLayer;
@property (nonatomic) BOOL isGestureSelected;
@property (retain, nonatomic) ACCTCECropRatioOption *data;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

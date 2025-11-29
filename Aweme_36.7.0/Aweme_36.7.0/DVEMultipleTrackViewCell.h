@class DVEMultipleTrackViewCellViewModel, UIImageView, UILabel, UIView;

@interface DVEMultipleTrackViewCell : UICollectionViewCell

@property (retain, nonatomic) DVEMultipleTrackViewCellViewModel *viewModel;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *iconLabel;
@property (nonatomic) BOOL enabledCornerRadius;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *anchorView;

- (void)updateUIIfNeeded;
- (void)updateAccessibility;
- (void)setupIconImageView;
- (void)clipPanChangedAtPosition:(unsigned long long)a0 offset:(double)a1;
- (void)clipPanBegin;
- (void)clipPanEnd;
- (void)setupBackview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)updateFrame;

@end

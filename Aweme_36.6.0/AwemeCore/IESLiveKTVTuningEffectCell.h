@class UIImageView, UILabel, UIView, IESLiveKTVTuningEffectCellViewModel;

@interface IESLiveKTVTuningEffectCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) IESLiveKTVTuningEffectCellViewModel *viewModel;
@property (nonatomic) long long scaleRatio;

- (void)bindViewModel;
- (void)soloKTVLayout;
- (void)resetColorWithStatus:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithViewModel:(id)a0;

@end

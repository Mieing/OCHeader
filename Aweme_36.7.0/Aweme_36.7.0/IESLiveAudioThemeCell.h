@class IESLiveAudioThemeCellViewModel, UIImageView, IESLiveAudioBackgroundView, UIView, UILabel, UIButton;

@interface IESLiveAudioThemeCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveAudioThemeCellViewModel *viewModel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) IESLiveAudioBackgroundView *audioBackgroundView;
@property (copy, nonatomic) id /* block */ deleteBlock;

- (void)bindViewModel;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateWithViewModel:(id)a0;

@end

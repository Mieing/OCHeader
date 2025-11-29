@class UIImageView, UILabel, UIView;

@interface IESLiveAudioThemeUploadCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

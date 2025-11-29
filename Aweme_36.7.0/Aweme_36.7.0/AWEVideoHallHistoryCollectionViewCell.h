@class DUXTextTag, AWEGradientView, UILabel, UIView, BDImageView;
@protocol AWEFakeProgressSliderViewProtocol;

@interface AWEVideoHallHistoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *rightBottomLabel;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (retain, nonatomic) UIView *updateView;
@property (retain, nonatomic) UILabel *updateLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView<AWEFakeProgressSliderViewProtocol> *progressBar;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

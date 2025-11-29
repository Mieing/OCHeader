@class UIImageView, AWEGradientView, UIView, UILabel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEPadGameLiveCardCell : UICollectionViewCell

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView *tagLabelBackView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end

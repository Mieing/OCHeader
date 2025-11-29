@class UIImageView, AWEAwemeModel, UILabel, UIButton;

@interface CMCBatManBannerView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *bannerCloseButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

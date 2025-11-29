@class UILabel, UIImageView;

@interface AWELunaUgBigBrandPopView : AWELunaUgPopView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;

- (id)p_lightColorNamed:(id)a0;
- (void)didClickMainTitle;
- (void)didClickSubTitle;
- (void)didClickBackgroundImage;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setUpUI;

@end

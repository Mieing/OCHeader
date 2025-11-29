@class UILabel, UIImageView, UIButton;

@interface AWEMusicLunaGuideBarFullSizeView : AWEMusicLunaGuideBarView

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIButton *mainButton;

- (void)setMainButtonTitle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setSubTitle:(id)a0;
- (void)setMainTitle:(id)a0;
- (void)setUpUI;

@end

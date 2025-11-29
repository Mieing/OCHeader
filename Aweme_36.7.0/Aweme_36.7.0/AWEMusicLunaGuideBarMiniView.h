@class UIImageView, UILabel, UIButton;

@interface AWEMusicLunaGuideBarMiniView : AWEMusicLunaGuideBarView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIButton *mainButton;
@property (nonatomic) BOOL isNewProfileArrowStyleStatus;
@property (nonatomic) BOOL isProfileCollectLargeFontModeOptV2;

- (void)setMainButtonTitle:(id)a0;
- (void)p_setUpUI;
- (id)initWithIsNewProfileArrowStyleStatus:(BOOL)a0 isProfileCollectLargeFontModeOptV2:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setSubTitle:(id)a0;
- (void)setMainTitle:(id)a0;

@end

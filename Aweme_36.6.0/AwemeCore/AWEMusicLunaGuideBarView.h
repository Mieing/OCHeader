@interface AWEMusicLunaGuideBarView : UIView

@property (copy, nonatomic) id /* block */ clickBlock;

+ (id)lynxUrl;

- (void)updateContentWithMainTitle:(id)a0 subTitle:(id)a1 mainButtonTitle:(id)a2;
- (id)initWithStyle:(unsigned long long)a0 globalProps:(id)a1 isNewProfileArrowStyleStatus:(BOOL)a2 isProfileCollectLargeFontModeOptV2:(BOOL)a3;
- (void)setMainButtonTitle:(id)a0;
- (id)p_colorWithLightColor:(id)a0 darkColor:(id)a1;
- (id)initWithStyle:(unsigned long long)a0 globalProps:(id)a1;
- (void)didClickedMainButton;
- (id)p_imageWithLightImage:(id)a0 darkImage:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setSubTitle:(id)a0;
- (void)setMainTitle:(id)a0;

@end

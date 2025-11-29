@class AWEIMThemeSettingPreviewConfig, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMThemeSettingPreviewViewDelegate;

@interface AWEIMThemeSettingPreviewView : UIView

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *leftMsgContainerView;
@property (retain, nonatomic) UILabel *leftMsgLable;
@property (retain, nonatomic) UIImageView *leftMsgAvatarView;
@property (retain, nonatomic) UIView *rightMsgContainerView;
@property (retain, nonatomic) UILabel *rightMsgLable;
@property (retain, nonatomic) UIImageView *rightMsgAvatarView;
@property (retain, nonatomic) UIImageView *rightMsgLabelLTView;
@property (retain, nonatomic) UIImageView *rightMsgLabelLBView;
@property (retain, nonatomic) UIImageView *rightMsgLabelRTView;
@property (retain, nonatomic) UIImageView *rightMsgLabelRBView;
@property (retain, nonatomic) UIButton *customeBackgroundBtn;
@property (retain, nonatomic) AWEIMThemeSettingPreviewConfig *config;
@property (weak, nonatomic) id<AWEIMThemeSettingPreviewViewDelegate> delegate;

- (void)updateAvatar;
- (void)configWithModel:(id)a0;
- (void)p_constraintSubViews;
- (void)p_setOtherViewBackgroundWithHasBackground:(BOOL)a0 rightBubbleColor:(id)a1;
- (void)p_setBackGroundWithUrl:(id)a0 skey:(id)a1 rightBubbleColor:(id)a2;
- (void)p_customBackgroundDidClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;
- (id)initWithConfig:(id)a0;

@end

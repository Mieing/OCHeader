@class AWEProfileAvatarPreviewPendantManager, NSString, UIImageView, AWEUserAvatarDecotationModel, UILabel, AWEUserModel;

@interface AWEProfileAvatarPreviewPendantButton : AWEAnimatedButton <AWEProfileAvatarPreviewPendantButtonProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUserModel *currentLoginUser;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (retain, nonatomic) AWEUserAvatarDecotationModel *decoration;
@property (retain, nonatomic) UIImageView *avatarPendantImageView;
@property (retain, nonatomic) UIImageView *avatarPendantBackgroundDropView;
@property (retain, nonatomic) UILabel *pendantTitleLabel;
@property (retain, nonatomic) UIImageView *atmosphereBackgroundImageView;
@property (retain, nonatomic) UIImageView *avatarThumbImageView;
@property (nonatomic) BOOL isButtonClickedAction;
@property (retain, nonatomic) AWEProfileAvatarPreviewPendantManager *pandantManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)superView;
- (void)setupNormalUI;
- (void)setupAtmosphereUI;
- (void)configureContentWithModel:(id)a0;
- (void)removeAvatarPreviewViewWhenPushingViewController:(BOOL)a0;
- (void)setPendantTitleLabelFontSize:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 enterFrom:(id)a2;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;

@end

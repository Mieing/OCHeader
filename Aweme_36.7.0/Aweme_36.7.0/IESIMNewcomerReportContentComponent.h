@class AWEIMUIImageViewPresenter, AWEIMUIButtonPresenter, IESIMGroupAvatarPresenter, AWEIMUILabelPresenter, NSString, AWEIMUIViewPresenter;

@interface IESIMNewcomerReportContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) IESIMGroupAvatarPresenter *avatar;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *closeButton;
@property (retain, nonatomic) AWEIMUIViewPresenter *avatarAndCloseButton;
@property (retain, nonatomic) AWEIMUIViewPresenter *card;
@property (retain, nonatomic) AWEIMUIViewPresenter *avatarContainer;
@property (retain, nonatomic) AWEIMUILabelPresenter *title;
@property (retain, nonatomic) AWEIMUILabelPresenter *subtitle;
@property (retain, nonatomic) AWEIMUIButtonPresenter *reportButton;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)p_reportButtonIconDisabled;
+ (id)p_reportButtonIconExpired;
+ (id)p_reportButtonIcon;
+ (id)p_imageWithAlpha:(double)a0 image:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createTitleLabel;
- (void)p_createSubtitleLabel;
- (void)p_createPresenter;
- (void)p_createAvatar;
- (void)p_createCloseButton;
- (void)p_trackShowData;
- (void)p_updateTitleLabelText;
- (void)p_updateReportButtonStateProps;
- (void)p_updateCardBackground;
- (void)p_updateReportButtonUIProps;
- (void)p_createAvatarContainer;
- (void)p_createCard;
- (void)p_createReportButton;
- (void)p_tapCloseButton;
- (void)p_tapReportButton;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end

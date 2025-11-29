@class VoipAutoUpdateLabel, MMUIButton, MultiTalkHDHeadView, MMUIActivityIndicatorView, NSString, VoIPHeadImageBlurView, UIImageView, VoipDescriptionButton, UILabel, VoIPInvitationInfo;
@protocol VoIPInvitationFullScreenViewDelegate;

@interface VoIP2PInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>

@property (retain, nonatomic) VoIPInvitationInfo *info;
@property (retain, nonatomic) VoIPHeadImageBlurView *backgroundView;
@property (retain, nonatomic) UIImageView *m_profileBackgroundView;
@property (retain, nonatomic) MMUIButton *miniInAppButton;
@property (retain, nonatomic) VoipAutoUpdateLabel *statusAudoUpdateLabel;
@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (retain, nonatomic) UILabel *usrnameLabel;
@property (retain, nonatomic) VoipDescriptionButton *acceptButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView;
@property (retain, nonatomic) VoipDescriptionButton *hangupButton;
@property (weak, nonatomic) id<VoIPInvitationFullScreenViewDelegate> delegate;
@property (nonatomic) BOOL isAccepted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutMiniInAppButton;
- (void)layoutStatusLabel;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (void)layoutAcceptButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutHangupButton;
- (void)onMiniInAppButtonClickWithSender:(id)a0;
- (void)onAcceptButtonClickWithSender:(id)a0;
- (void)onHangupButtonClickWithSender:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 info:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

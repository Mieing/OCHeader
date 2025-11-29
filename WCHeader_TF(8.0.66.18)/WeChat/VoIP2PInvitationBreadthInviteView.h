@class VOIPVideoRender, VoipDescriptionButton, MMUIButton, UIVisualEffectView, VoipAutoUpdateLabel, VoIPInvitationInfo, UIView, MMUILabel, MultiTalkHDHeadView, NSString, MMUIActivityIndicatorView, XImageViewRenderer, UIImageView;
@protocol VoIPInvitationBreadthInviteViewDelegate;

@interface VoIP2PInvitationBreadthInviteView : UIView <VoIPInvitationBreadthInviteView>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (retain, nonatomic) UIView *captureView;
@property (retain, nonatomic) UIVisualEffectView *captureVisualEffectView;
@property (retain, nonatomic) MultiTalkHDHeadView *headView;
@property (retain, nonatomic) VoipDescriptionButton *acceptDescriptionButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView;
@property (retain, nonatomic) VoipDescriptionButton *hangupDescriptionButton;
@property (retain, nonatomic) MMUIButton *ignoreButton;
@property (retain, nonatomic) MMUILabel *usrnameLabel;
@property (retain, nonatomic) VoipAutoUpdateLabel *descriptionLabel;
@property (retain, nonatomic) VOIPVideoRender *videoRender;
@property (retain, nonatomic) XImageViewRenderer *rciLocalRender;
@property (nonatomic) double buttonAreaHeight;
@property (nonatomic) double buttonHeadViewVerticalMargin;
@property (nonatomic) double buttonAreaVerticalMargin;
@property (nonatomic) double headImageSize;
@property (retain, nonatomic) VoIPInvitationInfo *info;
@property (readonly, nonatomic) double userNameCenterY;
@property (weak, nonatomic) id<VoIPInvitationBreadthInviteViewDelegate> delegate;
@property (nonatomic) BOOL isAccepted;
@property (nonatomic) BOOL disableVideoCapture;
@property (nonatomic) BOOL isSupportIgnore;
@property (readonly, nonatomic) BOOL isQuickReplyDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutBackgroundView;
- (void)layoutExpandButton;
- (void)layoutCaptureView;
- (void)layoutCaptureVisualEffectView;
- (void)layoutHeadView;
- (void)layoutAcceptDescriptionButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutHangUpDescriptionButton;
- (void)layoutIgnoreButton;
- (void)layoutUserNameLabel;
- (void)layoutDescriptionLabel;
- (void)layoutLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 info:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onAcceptDescriptionButtonClick:(id)a0;
- (void)onHangupDescriptionButtonClick:(id)a0;
- (void)onMyselfClick:(id)a0;
- (void)onIgnoreButtonClick:(id)a0;
- (void)removeKVOForDescriptionLabel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)preferredExtendHeightWithInfo:(id)a0 width:(double)a1;
- (void)updateWithInvitationInfo:(id)a0;
- (void).cxx_destruct;

@end

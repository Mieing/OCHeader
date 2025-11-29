@class VoipAutoUpdateLabel, XImageViewRenderer, NSArray, MultiTalkHDHeadView, NSString, UIImageView, VoipDescriptionButton, VOIPVideoRender, MMUILabel, MMUIButton, VoIPInvitationInfo;
@protocol VoIPInvitationBreadthInviteViewDelegate;

@interface VoIPMTInvitationBreadthInviteView : UIView <VoIPInvitationBreadthInviteView>

@property (retain, nonatomic) UIImageView *blurView;
@property (retain, nonatomic) UIImageView *customMaskView;
@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (retain, nonatomic) VoipDescriptionButton *acceptButton;
@property (retain, nonatomic) VoipDescriptionButton *hangupButton;
@property (retain, nonatomic) MMUILabel *userNameLabel;
@property (retain, nonatomic) VoipAutoUpdateLabel *autoUpdateLabel;
@property (retain, nonatomic) MMUILabel *membersDescLabel;
@property (retain, nonatomic) NSArray *memberHeadViews;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (retain, nonatomic) VoIPInvitationInfo *info;
@property (readonly, nonatomic) double userNameCenterY;
@property (weak, nonatomic) id<VoIPInvitationBreadthInviteViewDelegate> delegate;
@property (readonly, nonatomic) VOIPVideoRender *videoRender;
@property (readonly, nonatomic) XImageViewRenderer *rciLocalRender;
@property (nonatomic) BOOL isAccepted;
@property (nonatomic) BOOL disableVideoCapture;
@property (nonatomic) BOOL isSupportIgnore;
@property (readonly, nonatomic) BOOL isQuickReplyDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)displayMembersMaxWidthWithWidth:(double)a0;
+ (unsigned long long)oneLineMaxMembersCountWithWidth:(double)a0;

- (void)removeKVOForDescriptionLabel;
- (double)preferredExtendHeightWithInfo:(id)a0 width:(double)a1;
- (void)onMyselfClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 info:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onAcceptButtonClick:(id)a0;
- (void)onHangupButtonClick:(id)a0;
- (void)updateWithInvitationInfo:(id)a0;
- (void).cxx_destruct;

@end

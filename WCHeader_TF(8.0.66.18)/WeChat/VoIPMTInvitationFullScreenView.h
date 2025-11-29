@class VoipAutoUpdateLabel, MMUIActivityIndicatorView, MultiTalkHDHeadView, MMUIButton, NSArray, VoIPHeadImageBlurView, UIButton, UIImageView, NSString, UILabel, VoIPInvitationInfo;
@protocol VoIPInvitationFullScreenViewDelegate;

@interface VoIPMTInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>

@property (retain, nonatomic) VoIPInvitationInfo *info;
@property (retain, nonatomic) VoIPHeadImageBlurView *backgroundView;
@property (retain, nonatomic) UIImageView *profileBackgroundView;
@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) VoipAutoUpdateLabel *descriptionLabel;
@property (retain, nonatomic) UILabel *memberDescLabel;
@property (retain, nonatomic) UIButton *hangupButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView;
@property (retain, nonatomic) MMUIButton *minimizeButton;
@property (retain, nonatomic) NSArray *memberHeadViews;
@property (weak, nonatomic) id<VoIPInvitationFullScreenViewDelegate> delegate;
@property (nonatomic) BOOL isAccepted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onHangupButtonClick:(id)a0;
- (void)onAcceptButtonClick:(id)a0;
- (void)onMinimizeButtonClick:(id)a0;
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutAcceptIndicatorView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 info:(id)a1;
- (void).cxx_destruct;

@end

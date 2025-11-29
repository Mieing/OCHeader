@class AWEPlayInteractionRedPacketElementViewModel, LOTAnimationView, UIImageView, NSString, IESLiveVideoGiftController;

@interface AWEPlayInteractionRedPacketElement : AWEPlayInteractionLeftElement <CAAnimationDelegate, IESLiveVideoGiftControllerDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionRedPacketElementViewModel *viewModel;
@property (retain, nonatomic) LOTAnimationView *redpacketLottieView;
@property (retain, nonatomic) IESLiveVideoGiftController *redpacketAlphaPlayer;
@property (nonatomic) BOOL redpacketViewVisible;
@property (nonatomic) BOOL redpacketSourceLoadSuccess;
@property (nonatomic) BOOL delayToPlayRedpacketAnimation;
@property (nonatomic) BOOL disableAppearAnimation;
@property (nonatomic) BOOL hasAddedToken;
@property (nonatomic) BOOL isActivity;
@property (nonatomic) BOOL isAlphaVideo;
@property (retain, nonatomic) UIImageView *redpacketImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)didFinishPlayingWithError:(id)a0;
- (void)showRedpacketAnimation;
- (void)checkIfShouldShowCampaignMaskViewWithCampaignID:(id)a0;
- (void)updateCampaignRedPacketImageView;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)viewDidDisposed;
- (void)bindEvent;
- (id)currentInfoForSubUnits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)addTokenToSlardarIfNeeded;
- (void)removeTokenFromSlardarIfNeeded;
- (void)hideSmallPacket:(BOOL)a0;
- (void)disableCampaignRedPacketAnimation:(id)a0;
- (void)trackShowRedpacketIfNeeded;
- (void)trackInteractiveVideoDataLogWithMessage:(id)a0;
- (void)trackInteractiveVideoActionLogWithMessage:(id)a0;
- (void)updateRedPacketImageView;
- (void)updateAdRedPacketImageView;
- (void)updateXiguaRedPacketImageView;
- (void)p_prepareCampaignRedPacketImageViewForDisplay;
- (void)p_prepareAdRedPacketImageViewForDisplay;
- (void)redpacketShowSuccess;
- (void)redPacketBeginAnimation;
- (void)redpacketShowFail;
- (BOOL)useNewAnimation;
- (void)trackStickerOrKOLPendantShowEvent;
- (void)p_prepareXiguaRedPacketImageViewForDisplay;
- (void)onRedPackedImageClicked:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)currentInfo;

@end

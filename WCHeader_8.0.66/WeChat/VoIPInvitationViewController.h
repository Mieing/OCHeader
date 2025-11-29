@class VoIPInvitationBreadthView, RingToneMixPlayer, NSString, VoIPInvitationInfo;
@protocol VoIPInvitationViewControllerDelegate;

@interface VoIPInvitationViewController : MMWindowViewController <VoIPInvitationBreadthViewDelegate, VoIPInvitationWindowDelegate, WeChat.CarPlayVoIPReceiveDelegate>

@property (retain, nonatomic) VoIPInvitationInfo *info;
@property (nonatomic) unsigned long long talkingRoomID;
@property (nonatomic) long long talkingRoomKey;
@property (nonatomic) BOOL isMultiTalking;
@property (retain, nonatomic) RingToneMixPlayer *ringToneMixPlayer;
@property (nonatomic) BOOL isRingPlayed;
@property (copy, nonatomic) id /* block */ stopRingDispatchBlock;
@property (retain, nonatomic) VoIPInvitationBreadthView *breadthView;
@property (copy, nonatomic) id /* block */ inviteBreadthTimeoutBlock;
@property (nonatomic) BOOL shouldVibrate;
@property (nonatomic) BOOL isCardSupportIgnore;
@property (weak, nonatomic) id<VoIPInvitationViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 talkingRoomID:(unsigned long long)a1 talkingRoomKey:(long long)a2 isMultiTalking:(BOOL)a3;
- (void)scrollIn;
- (void)clearIfNeedAnimation:(BOOL)a0;
- (void)restoreInviteScene;
- (void)showInWindow;
- (void)accept;
- (void)hangupManually:(BOOL)a0;
- (void)hangup;
- (void)loadBreadthView;
- (void)clearStopRingDispatchBlock;
- (void)stopRing;
- (void)clearInviteBreadthTimeoutBlock;
- (void)dealloc;
- (void)vibrateClassicIfNeed;
- (void)viewDidLoad;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)a0 manually:(BOOL)a1;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)a0 manually:(BOOL)a1;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(id)a0;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)a0;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)a0;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)a0;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)a0;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)a0;
- (void)voIPInvitationBreadthViewDidInviteViewIgnore:(id)a0;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)a0;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)a0;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)a0;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)a0;
- (BOOL)canTouchWithPoint:(struct CGPoint { double x0; double x1; })a0 event:(id)a1 fromView:(id)a2;
- (BOOL)isInBreath;
- (BOOL)isInBreathInviteScene;
- (BOOL)isInBreathQuickReplyScene;
- (void)applicationDidBecomeActive;
- (void)didEnterBackground;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(BOOL)a0;
- (void).cxx_destruct;

@end

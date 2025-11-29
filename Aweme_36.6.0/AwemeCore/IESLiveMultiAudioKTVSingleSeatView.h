@class UIImageView, NSString, UIView;
@protocol IESLiveWebPPlayer, HTSGuestInfoRenderer;

@interface IESLiveMultiAudioKTVSingleSeatView : UIView <IESLiveSocialInteractAction, HTSLivePluginLayoutView, IESLiveMultiAudioSingleSeatViewProtocol, IESLiveChatRoomInviteGuideViewShowingView>

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *guideAnimView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *joinImage;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) double scale;
@property (nonatomic) BOOL occupied;
@property (retain, nonatomic) UIView<HTSGuestInfoRenderer> *infoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long index;
@property (readonly, nonatomic) BOOL canStartGuideAnimation;

- (void)stopGuideAnimation;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (BOOL)isShowingGuideAnimation;
- (void)inviteGuideViewWillShowing;
- (void)inviteGuideViewWillHiding;
- (void)startGuideAnimationWithEndBlock:(id /* block */)a0;
- (void)playBreathingLightAnimation;
- (BOOL)isBreathingLightAnimationShowing;
- (void)p_playBreathingLightAnimation:(long long)a0 repeatCount:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1 index:(long long)a2 diContext:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1 index:(long long)a2 scale:(double)a3 diContext:(id)a4;
- (void).cxx_destruct;
- (id)viewType;
- (void)setUpViews;

@end

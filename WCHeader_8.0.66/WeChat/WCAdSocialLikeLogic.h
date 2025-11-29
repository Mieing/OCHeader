@class WCDataItem, WCAdFireworkCheerAnimationView, PAGView, WCAdPagView, UIView, NSString;

@interface WCAdSocialLikeLogic : WCAdvertiseOperationLogicBase <WCAdFireworkCheerAnimationViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (nonatomic) BOOL fireworkCheerLikePendingFlag;
@property (nonatomic) BOOL fireworkCheerCommentAnimationPendingFlag;
@property (nonatomic) BOOL mainMediaPlayingFlag;
@property (retain, nonatomic) WCAdFireworkCheerAnimationView *fullScreenAnimationView;
@property (retain, nonatomic) UIView *playerViewCache;
@property (nonatomic) BOOL attractingViewPlayed;
@property (retain, nonatomic) UIView *attractingViewCache;
@property (retain, nonatomic) UIView *attractingIconCache;
@property (nonatomic) BOOL attractingViewErrorReported;
@property (retain, nonatomic) UIView *bannerAnimationViewCache;
@property (nonatomic) int continuousLikeState;
@property (nonatomic) int continuousLikeCount;
@property (nonatomic) BOOL fireworkCheerAttractingPlayed;
@property (retain, nonatomic) PAGView *fireworkCheerAttractingViewCache;
@property (retain, nonatomic) PAGView *fireworkCheerLikeIconCache;
@property (nonatomic) BOOL fireworkCheerHideButtonIconPendingFlag;
@property (retain, nonatomic) WCAdPagView *patIconPagCache;
@property (retain, nonatomic) WCAdPagView *patIconPagDarkCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSocialLikeLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)dealloc;
- (void)continuousLike;
- (void)continuousLikeCancel;
- (void)exitContinuousLikingState;
- (void)notifyContinuousLikeStateChanged;
- (void)notifyContinuousLikeCountChanged;
- (BOOL)playFireworkCheerAnimation;
- (BOOL)isFireworkCheerAnimationPlaying;
- (void)fireworkCheerPendingLike;
- (void)notifyFireworkCheerRealLike;
- (void)fireworkCheerRealLike;
- (void)notifyFireworkCheerCommentAnimationStarted;
- (BOOL)isFireworkCheerCommentPendingToAnimation;
- (void)mainMediaPlay;
- (void)mainMediaStop;
- (void)notifyMainMediaPlayStateChanged;
- (BOOL)isMainMediaPlaying;
- (BOOL)playFullScreenAnimation:(id)a0 canCloseDelayTime:(double)a1 vibrateDelayTime:(double)a2;
- (void)onFireworkCheerAnimationFinished:(id)a0;
- (void).cxx_destruct;

@end

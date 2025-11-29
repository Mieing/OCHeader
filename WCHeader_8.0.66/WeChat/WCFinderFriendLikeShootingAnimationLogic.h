@class NSString, PAGView, WCFinderFeedContentVM, UIView, UILabel, UIViewPropertyAnimator;
@protocol MMFinderFriendLikeShootingAinmationStartProtocol, MMFinderFriendLikeShootingAnimationTargetProtocol;

@interface WCFinderFriendLikeShootingAnimationLogic : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) UIView<MMFinderFriendLikeShootingAnimationTargetProtocol> *targetView;
@property (weak, nonatomic) UIView<MMFinderFriendLikeShootingAinmationStartProtocol> *startView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *shootingAvatarView;
@property (nonatomic) double shootingAniamtionBeginTime;
@property (nonatomic) BOOL shootingAnimating;
@property (nonatomic) unsigned long long likeCountBeforAnimation;
@property (nonatomic) BOOL shouldCancelAnimation;
@property (nonatomic) BOOL callComplection;
@property (retain, nonatomic) PAGView *likeAnimationPag;
@property (retain, nonatomic) UILabel *likeCountAnimationLabel;
@property (retain, nonatomic) UILabel *likeInfoLabel;
@property (nonatomic) unsigned long long likeAniamtionCount;
@property (nonatomic) double headViewLeft;
@property (nonatomic) double nameLabelLeft;
@property (nonatomic) double likeIconViewCenterX;
@property (nonatomic) double likeCountLeft;
@property (nonatomic) struct CGSize { double width; double height; } likeIconSize;
@property (nonatomic) BOOL startLongPress;
@property (nonatomic) BOOL endLongPress;
@property (retain, nonatomic) UIViewPropertyAnimator *lastProperty;
@property (copy, nonatomic) id /* block */ shootingAnimationCompletion;
@property (copy, nonatomic) id /* block */ longPressCancelAnimationBlock;
@property (copy, nonatomic) id /* block */ longPressEndAnimationCompletion;
@property (nonatomic) BOOL isLongPressAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)comboLikeDurationForCount:(long long)a0;

- (id)initWithTargetView:(id)a0 startView:(id)a1 containerView:(id)a2 contentVM:(id)a3;
- (void)tryPerformAnimation;
- (void)cancelAnimation;
- (void)displayLinkAction:(id)a0;
- (void)removeAnimationAvatarView;
- (void)dealloc;
- (BOOL)isShowNewStyleAnimation;
- (void)showNewStyleAnimation;
- (BOOL)canShowLikePagEffect;
- (void)showJumpUpAnimation;
- (void)showBottomeUpAnimation;
- (void)showHeaderAnimationFirstLike;
- (id)likeAnimInfoStr;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTargetRectInContainerView:(id)a0;
- (void)longPressPerActionWithState:(unsigned long long)a0;
- (void)startLongPressTimmerAnimation:(unsigned long long)a0;
- (double)durationForCount:(long long)a0;
- (void)showHeaderAnimationSecondLike;
- (void)showHeaderAnimationThirdLike;
- (void)showHeaderAnimationMoreLike;
- (id)showheaderArray;
- (void)moveCurrentHeaderView;
- (void)showJumpAnimationSecondLike;
- (void)showJumpAnimationThirdLike;
- (void)showJumpAnimationMoreLike;
- (void)_showSelfJumpAnimationWithOffset:(double)a0;
- (void)_showOtherJumpAniationWithDelayTimeArray:(id)a0;
- (void)buttomeUpOthersWithDelayTimeArray:(id)a0;
- (void)bottomeUpOtherWithView:(id)a0 delayTime:(double)a1 duration:(double)a2;
- (void)bottomeUpSelf;
- (void)jumpAnimationWithView:(id)a0 offset:(double)a1 jumpDuration:(double)a2 downDuration:(double)a3 delayTime:(double)a4 complection:(id /* block */)a5;
- (void)doComplectionBlock;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;

@end

@class NSArray, MMTimer, NSString, WCFinderFeedFriendLikesInfoViewModel;
@protocol WCFinderFriendLikeToolbarViewDelegate;

@interface WCFinderFeedFriendLikesView : UIView <WCFinderThanksButtonDelegate, WCFinderFriendLikeToolbarViewProtocol, MMFinderFriendLikeShootingAnimationTargetProtocol>

@property (retain, nonatomic) WCFinderFeedFriendLikesInfoViewModel *viewModel;
@property (copy, nonatomic) NSArray *displayViewsArray;
@property (nonatomic) unsigned long long displayIndex;
@property (nonatomic) unsigned long long carouselLoopCount;
@property (nonatomic) BOOL canCarousel;
@property (nonatomic) BOOL startLikeAnimation;
@property (retain, nonatomic) MMTimer *carouselTimer;
@property (weak, nonatomic) id<WCFinderFriendLikeToolbarViewDelegate> delegate;
@property (nonatomic) BOOL isFriendLikeAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithContentVM:(id)a0 flag:(unsigned long long)a1;

- (BOOL)updateWithContentVM:(id)a0 flag:(unsigned long long)a1;
- (void)updateSubViews;
- (Class)viewClassWithType:(unsigned long long)a0;
- (void)prepareForReuse;
- (void)resetHeaderViewsAndLikeCount;
- (id)getFirstFriendLikeView;
- (void)clickViewActionWithViewModel:(id)a0;
- (void)startLikeInfoCarousel;
- (void)stopLikeInfoCarousel;
- (void)_stopLikeInfoCarousel;
- (void)_displayOnlyOneLikeInfoAnimation;
- (void)_displayLikeInfoCarousel;
- (void)_displayComboLikeAnimation:(id)a0 complection:(id /* block */)a1;
- (id)friendLikeShootingAinmationTargetCreateSnapshotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })friendLikeShootingAinmationTargetGetFrame;
- (id)createOneSelfAvatarView;
- (id)generatorAvatorView:(id)a0 headUrl:(id)a1;
- (id)friendLikeShowingHeaderViews;
- (BOOL)supportNewStyle;
- (void)friendLikeAvatorViewLayout;
- (void)friendLikeTitleRefreshLayoutWithSuperLikeFlag:(BOOL)a0;
- (id)likeHeaderContainerView;
- (id)selfNameLabel;
- (id)selfLikeIconView;
- (void)friendLikeStartLongPressAction;
- (void)friendLikeEndLongPressAction;
- (BOOL)removedOnCompletion;
- (void)friendLikeStartPerformAnimation;
- (BOOL)canShowThanksButtonInView;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)a0;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary, AFDStoryGradientRingView, AWELocalColorRingItemInfo;
@protocol AFDCloseFriendsStoryCircleShowTrackerProtocol, AFDCloseFriendsColorRingDisplayManagerDelegate;

@interface AFDCloseFriendsColorRingDisplayManager : NSObject <AWEZoomTransitionOuterContextProvider, AFDCloseFriendsColorRingDisplayManagerProtocol>

@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (retain, nonatomic) AFDStoryGradientRingView *colorRingView;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) AWELocalColorRingItemInfo *ringItem;
@property (retain, nonatomic) id<AFDCloseFriendsStoryCircleShowTrackerProtocol> storyCircleShowTracker;
@property (retain, nonatomic) id identifier;
@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) unsigned long long fromScene;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingDisplayManagerDelegate> delegate;
@property (nonatomic) double activeRingWidth;
@property (nonatomic) double inactiveRingWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorRingDisplayManagerWithScene:(unsigned long long)a0;
+ (BOOL)shouldShowColorRingWithFromScene:(unsigned long long)a0;
+ (unsigned long long)getColorRingEnterFromWithScene:(unsigned long long)a0;
+ (long long)getRequestMomentFeedStrategyWithScene:(unsigned long long)a0;
+ (BOOL)isHitShowColorRingAtNoticePageTest;
+ (BOOL)enableShowColorRingAtChatPageRefactor;
+ (BOOL)enableShowColorRingAtConversationPageRefactor;
+ (void)setupTransferMomentFeedParameter:(id)a0 withScene:(unsigned long long)a1;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)zoomTransitionShrinkFinish;
- (unsigned long long)skylightAvatarSize;
- (id)initWithFromScene:(unsigned long long)a0;
- (void)updateColorRingWithUid:(id)a0 showEventTracker:(id)a1 trackerIdentifier:(id)a2;
- (BOOL)hasColorRing;
- (id)colorRingConfig;
- (void)transferToMomentFeed;
- (void)trackStoryCircleShowEvent;
- (void)trackStoryCircleShowEventWithoutIdentifierCheck;
- (id)getActiveRingConfig;
- (id)zoomTransitionStartViewForMoment;
- (void)onReceiveColorRingChangeNotification:(id)a0;
- (void)p_updateColorRingIfNeeded;
- (id)getInactiveRingConfig;
- (id)getFriendActiveRingConfig;
- (void)trackStoryCircleClickEvent;
- (id)p_inactiveConfigMap;
- (id)p_activeConfigMap;
- (id)p_friendActiveConfigMapWithIsCFStoryUserNewStyle:(BOOL)a0;
- (void)p_trackStoryCircleShowEvent;
- (void)preloadImageForMomentFeed;
- (id)targetView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;

@end

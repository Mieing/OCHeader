@class NSString;
@protocol AFDCloseFriendsStoryCircleShowTrackerProtocol, AFDCloseFriendsColorRingDisplayManagerProtocol, IESIMColorRingDelegate;

@interface IESIMColorRingManager : NSObject <IESIMColorRingProtocol, AFDCloseFriendsColorRingDisplayManagerDelegate>

@property (retain, nonatomic) id<AFDCloseFriendsColorRingDisplayManagerProtocol> colorRingDisplayManager;
@property (retain, nonatomic) id<AFDCloseFriendsStoryCircleShowTrackerProtocol> storyCircleShowTracker;
@property (weak, nonatomic) id<IESIMColorRingDelegate> iesimDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasColorRing;
- (void)transferToMomentFeed;
- (void)trackStoryCircleShowEvent;
- (BOOL)cf_canShowColorRingWithRingStatus:(long long)a0;
- (id)cf_transitionTargetView;
- (void)cf_didUpdateByColorRingChanged;
- (void)p_updateColorRingWithHidden:(BOOL)a0 config:(id)a1;
- (void)trackViewWillAppear;
- (void)trackViewWillDisappear;
- (void)updateColorRingWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

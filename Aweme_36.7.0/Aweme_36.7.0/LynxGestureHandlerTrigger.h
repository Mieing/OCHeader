@class LynxGestureVelocityTracker, LynxGestureExtraBundle, NSSet, LynxGestureFlingTrigger, LynxGestureArenaManager, NSPointerArray, LynxEventHandler, LynxGestureDetectorManager;
@protocol LynxGestureArenaMember;

@interface LynxGestureHandlerTrigger : NSObject

@property (retain, nonatomic) NSPointerArray *velocityTrackers;
@property (retain, nonatomic) NSPointerArray *eventHandlers;
@property (weak, nonatomic) LynxGestureVelocityTracker *velocityTracker;
@property (weak, nonatomic) LynxEventHandler *eventHandler;
@property (retain, nonatomic) LynxGestureFlingTrigger *flinger;
@property (weak, nonatomic) LynxGestureDetectorManager *gestureDetectorManager;
@property (weak, nonatomic) LynxGestureArenaManager *gestureArenaManager;
@property (weak, nonatomic) id<LynxGestureArenaMember> winner;
@property (weak, nonatomic) id<LynxGestureArenaMember> lastWinner;
@property (weak, nonatomic) id<LynxGestureArenaMember> lastFlingWinner;
@property (retain, nonatomic) NSSet *simultaneousWinners;
@property (retain, nonatomic) NSSet *simultaneousGestureIds;
@property (retain, nonatomic) LynxGestureExtraBundle *extraBundle;
@property (nonatomic) long long lastFlingTargetId;
@property (weak, nonatomic) id<LynxGestureArenaMember> duplicatedMember;

- (id)initWithDetectorManager:(id)a0 arenaManager:(id)a1;
- (void)resolveTouchEvent:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 completionChainCandidates:(id)a4 bubbleCandidates:(id)a5;
- (void)dispatchBubble:(id)a0 touchEvent:(id)a1 bubbleCandidate:(id)a2 winner:(id)a3;
- (void)setCurrentWinnerWhenDown:(id)a0;
- (void)handleGestureDetectorState:(id)a0 gestureId:(long long)a1 state:(long long)a2;
- (void)handleFling:(id)a0;
- (void)updateSimultaneousWinner:(id)a0;
- (void)resetCandidatesGestures:(id)a0;
- (void)stopFlingByLastFlingMember:(id)a0 bubbleCandidates:(id)a1 competeChainCandidates:(id)a2 touches:(id)a3 event:(id)a4 touchEvent:(id)a5;
- (void)dispatchUIEventWithSimultaneousAndReCompete:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 winner:(id)a4 delta:(struct CGPoint { double x0; double x1; })a5 competeChainCandidates:(id)a6;
- (void)findNextWinnerInBegin:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 delta:(struct CGPoint { double x0; double x1; })a4 competeChainCandidates:(id)a5;
- (id)reCompeteByGestures:(id)a0 current:(id)a1;
- (void)dispatchUIEventWithSimultaneous:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 winner:(id)a4 delta:(struct CGPoint { double x0; double x1; })a5;
- (long long)getLastNotNullIndexOfNSPointer:(id)a0;
- (void)resetGestureHandlerAndSimultaneous:(id)a0;
- (int)getCurrentMemberState:(id)a0;
- (void)failOthersMembersInRaceRelation:(id)a0 currentGestureId:(long long)a1 simultaneousGestureIds:(id)a2;
- (void)dispatchUIEventOnCurrentWinner:(id)a0 touches:(id)a1 event:(id)a2 member:(id)a3 touchEvent:(id)a4 flingPoint:(struct CGPoint { double x0; double x1; })a5 handleBySimultaneous:(BOOL)a6 extraBundle:(id)a7;
- (void)resetGestureHandler:(id)a0;
- (id)getGestureHandlerWithMember:(id)a0 gestureId:(long long)a1;
- (long long)addVelocityTracker:(id)a0;
- (void)removeVelocityTracker:(long long)a0;
- (void).cxx_destruct;
- (void)removeEventHandler:(long long)a0;
- (long long)addEventHandler:(id)a0;
- (void)dealloc;

@end

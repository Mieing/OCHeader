@class LynxGestureDetectorManager, NSMutableDictionary, LynxGestureHandlerTrigger, NSMutableArray;
@protocol LynxGestureArenaMember;

@interface LynxGestureArenaManager : NSObject

@property (nonatomic) long long potentialMemberId;
@property (retain, nonatomic) id<LynxGestureArenaMember> winner;
@property (retain, nonatomic) NSMutableDictionary *arenaMemberMap;
@property (retain, nonatomic) NSMutableArray *bubbleCandidate;
@property (retain, nonatomic) LynxGestureDetectorManager *gestureDetectorManager;
@property (retain, nonatomic) NSMutableArray *competitionChainCandidates;
@property (readonly, nonatomic) LynxGestureHandlerTrigger *gestureHandlerTrigger;

- (void)clearCurrentGesture;
- (void)unregisterGestureDetectors:(long long)a0 detectorMap:(id)a1;
- (id)getCompetitionChainCandidates;
- (void)dispatchTouchToArena:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3;
- (void)dispatchBubble:(id)a0 touchEvent:(id)a1;
- (void)setActiveUIToArena:(id)a0;
- (long long)addMember:(id)a0;
- (BOOL)isMemberExist:(long long)a0;
- (id)getMemberById:(long long)a0;
- (void)removeMember:(id)a0 detectorMap:(id)a1;
- (void)registerGestureDetectors:(long long)a0 detectorMap:(id)a1;
- (void)setGestureDetectorState:(long long)a0 memberId:(long long)a1 state:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

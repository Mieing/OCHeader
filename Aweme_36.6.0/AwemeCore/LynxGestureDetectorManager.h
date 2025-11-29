@class LynxGestureArenaManager, NSMutableDictionary;

@interface LynxGestureDetectorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *gestureToArenaMembers;
@property (weak, nonatomic) LynxGestureArenaManager *arenaManager;

- (id)initWithArenaManager:(id)a0;
- (id)convertResponseChainToCompeteChain:(id)a0;
- (void)registerGestureDetector:(long long)a0 detector:(id)a1;
- (void)unregisterGestureDetector:(long long)a0 detector:(id)a1;
- (id)findCandidatesAfterCurrentInChain:(id)a0 current:(id)a1 members:(id)a2;
- (id)findCandidatesFromArenaMember:(id)a0 gestureToArenaMembers:(id)a1 arenaMembers:(id)a2;
- (void)registerGestureId:(long long)a0 withMemberId:(long long)a1;
- (void)unregisterGestureId:(long long)a0 withMemberId:(long long)a1;
- (id)handleSimultaneousWinner:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

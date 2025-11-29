@class AWEYAPEntranceRoutine;

@interface AWEYAPEntranceRoutineTracker : NSObject

@property (weak, nonatomic) AWEYAPEntranceRoutine *routine;

- (id)p_commonParams;
- (void)trackEntranceProcess:(unsigned long long)a0 stage:(id)a1 result:(BOOL)a2 extra:(id)a3;
- (void)p_track:(id)a0 params:(id)a1;
- (id)p_processTypeMap:(unsigned long long)a0;
- (void)trackEntranceEnter;
- (void)trackEntranceDispatch;
- (void)trackEntranceEndType:(long long)a0 errMsg:(id)a1;
- (void).cxx_destruct;
- (id)initWithRoutine:(id)a0;

@end

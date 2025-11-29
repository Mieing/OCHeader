@class NSMutableSet, NSMutableArray, MMGCRootsTracingGraphConfiguration;

@interface MMGCRootsTracer : NSObject {
    NSMutableArray *_candidates;
    MMGCRootsTracingGraphConfiguration *_configuration;
    NSMutableSet *_objectSet;
}

- (id)initWithConfiguration:(id)a0;
- (id)init;
- (void)addCandidate:(id)a0;
- (id)findPathToObject:(id)a0 fromRoots:(id)a1;
- (id)findPathToObject:(id)a0 fromRoots:(id)a1 stackDepth:(unsigned long long)a2 maxTravelElementCount:(unsigned long long)a3;
- (id)_findPathToObject:(id)a0 fromRoots:(id)a1 stackDepth:(unsigned long long)a2 maxTravelElementCount:(unsigned long long)a3;
- (id)findRetainCycles;
- (id)findRetainCyclesWithMaxCycleLength:(unsigned long long)a0;
- (id)_findRetainCyclesInObject:(id)a0 stackDepth:(unsigned long long)a1;
- (id)_unwrapCycle:(id)a0;
- (id)_shiftToUnifiedCycle:(id)a0;
- (id)_extractClassNamesFromGraphObjects:(id)a0;
- (id)_shiftToLowestLexicographically:(id)a0;
- (long long)_compareStringArray:(id)a0 withArray:(id)a1;
- (id)_shiftBufferToLowestAddress:(id)a0;
- (void).cxx_destruct;

@end

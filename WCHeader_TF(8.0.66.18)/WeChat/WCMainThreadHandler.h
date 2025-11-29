@interface WCMainThreadHandler : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m_threadLock;
    int m_cycleArrayCount;
    int m_tailPoint;
    struct MatrixStackInfo **m_mainThreadStackCycleArray;
    void **m_lockTraceArray;
    int *m_topStackAddressRepeatArray;
    int *m_mainThreadStackRepeatCountArray;
    struct KSStackCursor { struct { unsigned long long address; char *imageName; unsigned long long imageAddress; char *symbolName; unsigned long long symbolAddress; } stackEntry; struct { int currentDepth; BOOL hasGivenUp; } state; void /* function */ *resetCursor; void /* function */ *advanceCursor; void /* function */ *symbolicate; void *context[100]; } m_pointStackCursor;
}

- (id)initWithCycleArrayCount:(int)a0;
- (id)init;
- (void)dealloc;
- (void)freeLockTrace:(void *)a0;
- (void)addThreadStack:(struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)a0 andLockTrace:(void *)a1;
- (struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)getLastMainThreadStack;
- (id)makeThreadProfileJson;
- (struct KSStackCursor { struct { unsigned long long x0; char *x1; unsigned long long x2; char *x3; unsigned long long x4; } x0; struct { int x0; BOOL x1; } x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void *x5[100]; } *)getPointStackCursor;
- (int *)getPointStackRepeatCount;
- (id)makeLockTraceJson;

@end

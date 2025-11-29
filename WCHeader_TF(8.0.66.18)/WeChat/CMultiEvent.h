@class NSRecursiveLock, NSMutableDictionary, NSOperationQueue, NSMutableArray;

@interface CMultiEvent : NSObject {
    BOOL m_bStart;
    NSMutableArray *m_arrEvent;
    NSMutableDictionary *m_dicThreadEvent;
    NSOperationQueue *m_operationQueuEvent;
    NSRecursiveLock *m_oEventLock;
}

- (id)init;
- (void)dealloc;
- (BOOL)IsStart;
- (void)Start;
- (void)Stop;
- (void)ClearStopEvent;
- (void)AddEvent:(id)a0;
- (void)TerminateEventIfNotReceived:(unsigned int)a0;
- (void)StopEvent:(unsigned int)a0;
- (unsigned int)IsEventTypeExist:(unsigned int)a0;
- (id)FindEvent:(unsigned int)a0;
- (id)GetLock;
- (void).cxx_destruct;

@end

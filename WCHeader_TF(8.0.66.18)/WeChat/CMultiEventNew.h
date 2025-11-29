@class NSMutableArray, NSRecursiveLock;

@interface CMultiEventNew : NSObject {
    BOOL m_bStart;
    NSMutableArray *m_arrEvent;
    NSMutableArray *m_arrPendingEvent;
    NSRecursiveLock *m_oEventLock;
}

- (id)init;
- (void)dealloc;
- (BOOL)IsStart;
- (void)Start;
- (void)TryStartEvent:(id)a0;
- (void)Stop;
- (void)ClearStopEvent;
- (void)AddEvent:(id)a0;
- (void)TerminateEventIfNotReceived:(unsigned int)a0;
- (void)StopEvent:(unsigned int)a0;
- (unsigned int)IsEventTypeExist:(unsigned int)a0;
- (id)FindEvent:(unsigned int)a0;
- (void).cxx_destruct;

@end

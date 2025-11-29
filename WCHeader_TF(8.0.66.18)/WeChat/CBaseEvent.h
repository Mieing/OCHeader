@class NSThread;

@interface CBaseEvent : NSObject <NotifyFromPrtlDelegate> {
    BOOL m_bStart;
}

@property (nonatomic, getter=GetEventType) unsigned int m_uiEventType;
@property (nonatomic) unsigned int m_uiWXUin;
@property (nonatomic) unsigned int m_uiEventID;
@property (nonatomic) BOOL m_bNeedNotify;
@property (weak) NSThread *m_oCurThread;
@property (nonatomic) BOOL m_bStop;
@property (nonatomic) BOOL m_bEventFinish;

- (id)init;
- (void)dealloc;
- (void)TryStart;
- (void)Stop;
- (void)TerminateIfNotReceived;
- (void)SetStart:(BOOL)a0;
- (void)ForceStop;
- (BOOL)IsStart;
- (void)emptyThreadTimer:(id)a0;
- (void)AddOperationQueueEvent:(id)a0;
- (void)NotifyFromPrtl:(unsigned int)a0 MessageInfo:(id)a1;
- (void).cxx_destruct;

@end

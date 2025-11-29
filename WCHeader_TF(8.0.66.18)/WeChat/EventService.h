@class NSRecursiveLock, NSString, NSMutableDictionary, NSData, CMultiEvent;

@interface EventService : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *m_usbCmdHandler;
    NSRecursiveLock *m_usbCmdLock;
    NSData *m_usbEncyptKey;
}

@property (retain, nonatomic) CMultiEvent *m_oEventMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseInSafemode;

- (id)init;
- (void)dealloc;
- (unsigned int)internalCreateProtobufEvent:(id)a0 Flag:(unsigned int)a1 EventType:(unsigned int)a2;
- (unsigned int)CreateProtobufEvent:(id)a0 Flag:(unsigned int)a1;
- (unsigned int)CreateProtobufEventWithoutPBW:(id)a0 Flag:(unsigned int)a1;
- (unsigned int)CreateProtobufEvent:(id)a0 Flag:(unsigned int)a1 EventType:(unsigned int)a2;
- (unsigned int)CreateProtobufEvent:(id)a0 Flag:(unsigned int)a1 EventType:(unsigned int)a2 PWB:(const struct PBCGIHelperWrap { Class x0; Class x1; int x2; unsigned int x3; id x4; id x5; } *)a3;
- (void)StartService;
- (void)StopService;
- (void)TryStartEvents;
- (void)StopEvent:(unsigned int)a0;
- (void)TerminateEventIfNotReceived:(unsigned int)a0;
- (BOOL)req2Buf:(unsigned int)a0 Out:(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a1 Host:(id)a2 sequenceId:(unsigned short)a3;
- (int)buf2Resp:(unsigned int)a0 In:(const struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a1 Err:(int *)a2 Flags:(unsigned long long *)a3 sequenceId:(unsigned short *)a4;
- (void)HandleRespThread:(id)a0;
- (int)onGYNetEnd:(int)a0 Code:(int)a1 Msg:(const char *)a2 Hashcode:(unsigned int)a3 cgiProfile:(const void *)a4;
- (unsigned int)AddEvent:(id)a0;
- (void).cxx_destruct;

@end

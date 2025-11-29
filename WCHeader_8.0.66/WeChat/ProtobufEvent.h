@class ProtobufCGIWrap, NSString, ProtobufPrtlChannel, ProtobufEventHandler, MMAuthInfo, NSRecursiveLock;

@interface ProtobufEvent : CBaseEvent {
    ProtobufPrtlChannel *m_ptrl;
    ProtobufEventHandler *m_pbEventHandler;
    BOOL m_hasInvokePreHandler;
    int m_cmdstatus;
    BOOL m_ecdhHasSwitchCert;
    unsigned int m_ecdhCertVersion;
    unsigned int m_certRegion;
    void *m_ecdhClient;
    void *m_axEcdhClient;
    MMAuthInfo *m_authInfo;
    NSRecursiveLock *m_lock;
    BOOL m_hasTerminated;
}

@property (retain, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) ProtobufCGIWrap *m_pbCGIWrap;
@property (nonatomic) BOOL m_bSpeedy;

+ (void)SetHybridEcdhEncryptSkipAAK;
+ (unsigned int)certVersionWithRegion:(unsigned int)a0;
+ (unsigned int)switchFromCertVersion:(unsigned int)a0 region:(unsigned int)a1;
+ (struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; })taskExtraInfo:(const void *)a0 cgiWrap:(id)a1;

- (id)initWithCGIWrap:(id)a0 eventId:(unsigned int)a1;
- (void)dealloc;
- (id)m_delNotifyFromEvent;
- (void)TryStart;
- (BOOL)realStart;
- (void)TerminateIfNotReceived;
- (void)Stop;
- (void)safeLogIdkeyWithId:(unsigned int)a0 key:(unsigned int)a1;
- (void)NotifyFromPrtl:(unsigned int)a0 MessageInfo:(id)a1;
- (BOOL)Pack:(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 Host:(id)a1 sequenceId:(unsigned short)a2;
- (BOOL)InternalPack:(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 Host:(id)a1 sequenceId:(unsigned short)a2;
- (int)UnPack:(const struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 headExtFlags:(int *)a1 sequenceId:(unsigned short *)a2;
- (void).cxx_destruct;

@end

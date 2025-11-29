@class MMTimer, NSMutableSet, NSString;

@interface HeartBeatMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (nonatomic) BOOL m_isStop;
@property (retain, nonatomic) NSMutableSet *m_setRequestEventID;
@property (retain, nonatomic) MMTimer *m_timer;
@property (nonatomic) unsigned long long m_checkTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)StartHeartBeat;
- (void)StopHeartBeat;
- (void)internalStart;
- (void)internalStop;
- (void)startRequest;
- (void)stopRequest;
- (void)addRequestEventID:(unsigned int)a0;
- (BOOL)isLatestRequestEventID:(unsigned int)a0;
- (void)removeRequestEventID:(unsigned int)a0;
- (void)handleResponse:(id)a0 eventID:(unsigned int)a1;
- (void)resetTimer;
- (void)stopTimer;
- (void)onCheckTime;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

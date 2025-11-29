@class NSRecursiveLock, NSString, NSMutableDictionary, IESLiveLinkLiveRtc;

@interface IESLiveLinkLiveRtcSingleWrapper : NSObject <ByteRTCMonitorDelegate>

@property (retain, nonatomic) NSRecursiveLock *traceLock;
@property (copy, nonatomic) id /* block */ traceCallBack;
@property (retain, nonatomic) NSRecursiveLock *logLock;
@property (copy, nonatomic) id /* block */ logCallBack;
@property (retain, nonatomic) NSMutableDictionary *byteRtcParams;
@property (copy, nonatomic) NSString *lastestAppId;
@property BOOL destroyPending;
@property (retain, nonatomic) IESLiveLinkLiveRtc *liveRtcSingleInstance;
@property (retain, nonatomic) IESLiveLinkLiveRtc *liveRtcLastestInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAppId:(id)a0;
+ (id)getRTCRoomId:(id)a0;
+ (long long)getMixType:(id)a0;
+ (id)sharedLiveRtcInstance:(id)a0 delegate:(id)a1 parameters:(id)a2 delegateEx:(id)a3;
+ (void)destroyLiveRtc;
+ (void)setTTMonitorCallBack:(id /* block */)a0;
+ (void)setByteLog:(BOOL)a0 callBack:(id /* block */)a1;
+ (id)getInstance;

- (void)liveRtcDestroyAsync;
- (BOOL)isConsole;
- (void)onMonitorLog:(id)a0 withType:(id)a1;
- (void)onVerboseLogWithLevel:(unsigned long long)a0 filename:(id)a1 tag:(id)a2 line:(int)a3 functionName:(id)a4 format:(id)a5;
- (void).cxx_destruct;

@end

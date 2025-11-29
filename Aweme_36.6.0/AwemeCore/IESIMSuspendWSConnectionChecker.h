@class NSString;
@protocol IESLCConnectManagerProtocol;

@interface IESIMSuspendWSConnectionChecker : NSObject <IESIMSuspendWSConnectionCheckerProtocol>

@property (nonatomic) long long continuousWSTimeoutTimes;
@property (nonatomic) double startCheckTimestamp;
@property (nonatomic) BOOL isWSConnectionSuspend;
@property (readonly, nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (nonatomic) long long maxContinuousWSRequestTimeoutTimes;
@property (nonatomic) long long maxSuspendCheckInterval;
@property (nonatomic) long long maxForceHttpRequestDuration;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> lcConnectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWSConnectionSuspend;
- (BOOL)isConnectionSuspend;
- (void)markWSRequestTimeout:(BOOL)a0;
- (void)p_finishWSConnectionSuspend;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

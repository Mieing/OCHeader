@class EAccountNetworkSocket, NSString, NSData, EAccountLogEntity;

@interface EAccountNetworkSocketRequest : NSObject <EAccountNetworkSocketDelegate>

@property (retain, nonatomic) EAccountNetworkSocket *networkSocketObj;
@property (retain, nonatomic) NSData *message;
@property (nonatomic) BOOL hasResult;
@property (retain, nonatomic) NSString *ggah;
@property (retain, nonatomic) NSString *hadCallback;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isSwtichRequest;
@property (retain, nonatomic) NSString *params;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) long long port;
@property (nonatomic) BOOL SECURE_CONNECTION;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *bussinessType;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double totalTimeoutInterval;
@property (retain, nonatomic) NSString *errorTempParams;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) NSString *redirectTag;
@property (retain, nonatomic) NSString *redirectOrder;
@property (retain, nonatomic) NSString *socketHttpMethod;
@property (retain, nonatomic) EAccountLogEntity *logEty;
@property (retain, nonatomic) NSString *pipl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)theTimeIsUp;
- (void)cancelSocket;
- (BOOL)containsStringMethod:(id)a0 bString:(id)a1;
- (void)domainSwitchWithCurrentDomain:(id)a0;
- (void)startLog;
- (void)startSocketWithParams:(id)a0;
- (void)startTimerTick;
- (void)eaCcountNetworkSocket_Connection_state_ready;
- (void)eaCcountNetworkSocket_state_obsever_failedWithError:(id)a0;
- (void)eaCcountNetworkSocketdidReadData:(id)a0 WithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

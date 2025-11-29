@class NSString, EAccountGCDAsyncSocket, EAccountLogEntity;

@interface EAccountSocketRequest : NSObject <GCDAsyncSocketDelegate> {
    EAccountGCDAsyncSocket *asyncSocket;
}

@property (nonatomic) BOOL index;
@property (nonatomic) BOOL hasResult;
@property (retain, nonatomic) NSString *paramStr;
@property (retain, nonatomic) NSString *ggah;
@property (retain, nonatomic) NSString *hadCallback;
@property (nonatomic) BOOL isSwtichRequest;
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
- (void)getMobile:(id)a0;
- (BOOL)isDisConnect;
- (void)startSocket;
- (BOOL)containsStringMethod:(id)a0 bString:(id)a1;
- (void)domainSwitchWithCurrentDomain:(id)a0;
- (void)startLog;
- (void)startTimerTick;
- (void).cxx_destruct;
- (void)dealloc;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socket:(id)a0 didWriteDataWithTag:(long long)a1;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)socketDidSecure:(id)a0;
- (void)socket:(id)a0 didReceiveTrust:(struct __SecTrust { } *)a1 completionHandler:(id /* block */)a2;

@end

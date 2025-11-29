@class NSString, NSDictionary, TTAccountServerSecTime, TTAccountTicketGuardQueue, NSObject, TTAccountAttestKeyTsSign;
@protocol OS_dispatch_queue;

@interface TTAccountTicketGuard : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _secTimeLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _attestTsSignLock;
}

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tokenTsSign;
@property (retain, nonatomic) TTAccountTicketGuardQueue *tsSignUpdateTagQueue;
@property (copy, nonatomic) NSString *tokenFrom;
@property (copy, nonatomic) NSString *tokenTsSignFrom;
@property (copy, nonatomic) NSDictionary *secUserIdTsSignDic;
@property (retain, nonatomic) TTAccountServerSecTime *secTime;
@property (nonatomic) BOOL isCheckRefreshSecTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *secTimeCheckQueue;
@property (retain, nonatomic) TTAccountAttestKeyTsSign *attestTsSign;

+ (void)start;
+ (id)sharedInstance;

- (void)handleGetTicketRequest:(id)a0;
- (void)loadTsSignUpdateTag:(id)a0 tokenTsSign:(id)a1;
- (void)persistentStoreXToken:(id)a0 tsSign:(id)a1 request:(id)a2 response:(id)a3;
- (void)setupSecTimeAndAttestSign;
- (void)loginKeyAttestation:(id)a0;
- (void)setupTicketGuard;
- (void)checkSecTimeRefreshIfNeeded;
- (void)compensationAttestSignIfNeeded:(long long)a0 pubKey:(id)a1;
- (void)handleTokenUseTicketRequest:(id)a0 xToken:(id)a1;
- (void)handleSecUserIdUseTicketRequest:(id)a0;
- (void)handleAttestRequest:(id)a0;
- (void)saveTokenSignWithXToken:(id)a0 response:(id)a1 request:(id)a2;
- (void)handleSecUserIdResponse:(id)a0 request:(id)a1 data:(id)a2;
- (void)handleAttestResponse:(id)a0 request:(id)a1 responseError:(id)a2;
- (void)handleTokenGetTicketResponse:(id)a0 request:(id)a1;
- (void)addTicketGuardSdkSettings:(id)a0 tokenConfig:(id)a1 secUidConfig:(id)a2;
- (void)trackIfServerDataExist:(id)a0 serverData:(id)a1;
- (void)persistentTsSignTagQueue;
- (BOOL)shouldEnableTokenGuardForRequest:(id)a0 tokenConfig:(id)a1;
- (id)addHeadersToUseTicketRequest:(id)a0 xToken:(id)a1 needRee:(BOOL)a2 needTee:(BOOL)a3 tokenConfig:(id)a4;
- (void)handleSecUserIdGetTicketResponse:(id)a0 request:(id)a1 data:(id)a2;
- (void)handleSecUserIdUseTicketResponse:(id)a0 request:(id)a1 data:(id)a2;
- (id)addHeadersToUseTicketRequest:(id)a0 xToken:(id)a1 needRee:(BOOL)a2 needTee:(BOOL)a3;
- (void)clearTicketGuardToken:(BOOL)a0 clearSecUidSign:(BOOL)a1 scene:(id)a2;
- (id)getAttestTsSign;
- (void)handleResponseAttestInvalidate:(id)a0;
- (void)handleResponseUpdateSecTimeIfNeeded:(id)a0 request:(id)a1;
- (void)handleResponseAttestTsSign:(id)a0;
- (void)trackResponseAttestResult:(id)a0 request:(id)a1;
- (void)updateSecTimetamp:(id)a0;
- (id)getServerSecTime;
- (void)requestSecTs;
- (void)updateAttestTsSign:(id)a0;
- (BOOL)checkTsSignEmpty:(id)a0;
- (void)requestAttestKeyTsSign:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSDictionary;

@interface BDTGTicketManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serverDataMapMutex;
}

@property (copy, nonatomic) NSDictionary *serverDataMap;
@property long long responsetimestamp;
@property long long localTimestamp;

+ (id)serverDataKeyForRequest:(id)a0;
+ (id)addHeadersToGetTicketRequest:(id)a0 ticketName:(id)a1;
+ (id)addHeadersToGetTicketRequest:(id)a0 ticketName:(id)a1 timeout:(double)a2 reeOnly:(BOOL)a3;
+ (BOOL)enableTeePubKeyOptimize:(id)a0;
+ (id)teePubKeyRequestHeader;
+ (void)addIterationHeaderToGetTicketRequest:(id)a0;
+ (void)saveCertInResponseIfNeeded:(id)a0;
+ (id)addHeadersToUseTicketRequest:(id)a0 ticket:(id)a1 tsSign:(id)a2 tsSignRee:(id)a3 clientCert:(id)a4 ticketName:(id)a5 timeout:(double)a6 reeOnly:(BOOL)a7;
+ (id)addHeadersToUseTicketRequest:(id)a0 ticket:(id)a1 tsSign:(id)a2 tsSignRee:(id)a3 clientCert:(id)a4 ticketName:(id)a5 timeout:(double)a6 needRee:(BOOL)a7 needTee:(BOOL)a8;
+ (id)teeAddUseTicketHeaders:(id)a0 ticket:(id)a1 tsSign:(id)a2 clientCert:(id)a3 timestamp:(long long)a4 timeout:(double)a5 errorRecords:(id)a6 success:(BOOL *)a7;
+ (id)reeAddUseTicketHeaders:(id)a0 ticket:(id)a1 tsSignRee:(id)a2 timestamp:(long long)a3 timeout:(double)a4 errorRecords:(id)a5 success:(BOOL *)a6;
+ (id)reqSignContentWith:(id)a0 guardTarget:(id)a1 timestamp:(long long)a2;
+ (id)requestSignForContent:(id)a0 privateKey:(struct __SecKey { } *)a1 keyType:(id)a2 error:(id *)a3;
+ (BOOL)reqPathEnableSymmetricEncryption:(id)a0;
+ (id)hmacString:(id)a0 keyType:(id)a1 error:(id *)a2;
+ (id)serverDataKeyForRequestPath:(id)a0 tag:(id)a1;
+ (id)addHeadersToGetTicketRequest:(id)a0;
+ (id)sharedInstance;

- (id)p_loadCachedServerData;
- (void)addNetworkFilter;
- (void)addServerData:(id)a0 forKey:(id)a1;
- (id)addClientDataToRequest:(id)a0 guardTarget:(id)a1 attemptCount:(int *)a2;
- (id)handleGetTicketRequest:(id)a0;
- (void)handleGetTicketResponse:(id)a0 request:(id)a1;
- (void)handleTimeStampFromResponseHeaders:(id)a0;
- (id)handleUseTicketRequest:(id)a0;
- (void)handleUseTicketResponse:(id)a0 request:(id)a1;
- (id)ticketForRequestPath:(id)a0 tag:(id)a1;
- (void)handleTTNetRequestIfNeeded:(id)a0;
- (void)handleTTNetResponseIfNeeded:(id)a0 response:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end

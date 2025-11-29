@class WCPayIdKeyRegularReporter, NSString, WXPBGeneratedMessage;
@protocol WCPayBaseCgiDelegate;

@interface WCPayBaseCgi : MMObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;
@property (retain, nonatomic) WCPayIdKeyRegularReporter *idKeyReporter;
@property (retain, nonatomic) WXPBGeneratedMessage *cacheResponse;
@property (copy, nonatomic) NSString *debugModuleName;
@property (nonatomic) unsigned int cgiNumber;
@property (retain, nonatomic) WXPBGeneratedMessage *request;
@property (nonatomic) double firstPackTimeout;
@property (nonatomic) double expectFinishTimeout;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned char routeInfo;
@property (nonatomic) BOOL isAutoLifeCycle;
@property (nonatomic) unsigned int idKeyId;
@property (nonatomic) unsigned int idKeyKey;
@property (nonatomic) unsigned long long cacheDuration;
@property (nonatomic) unsigned long long cacheExpiredDate;
@property (nonatomic) BOOL enableCache;
@property (nonatomic) BOOL isNeedNotify;
@property (nonatomic) BOOL loadCacheAndRequestModeOpen;
@property (nonatomic) Class cacheResponseClass;
@property (nonatomic) BOOL needCacheResponseOnly;
@property (nonatomic) BOOL responseFromServer;
@property (weak, nonatomic) id<WCPayBaseCgiDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)clearResponseCache;
- (id)getCacheResponse;
- (void)startWithoutCache;
- (void)setupIdKeyReporter;
- (void)failWithNetworking:(id)a0;
- (BOOL)loadCache;
- (void)loadCacheImmediately;
- (id)cachePath;
- (id)expiredDateKey;
- (void)cacheResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)processCacheDataBeforeSetAsResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end

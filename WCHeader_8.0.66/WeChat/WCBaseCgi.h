@class WXPBGeneratedMessage, NSString, NSData, ProtobufCGIProfile;
@protocol WCBaseCgiDelegate;

@interface WCBaseCgi : MMObject <PBMessageObserverDelegate, PBCoding>

@property (nonatomic) BOOL canRetry;
@property (nonatomic) unsigned int eventID;
@property (retain, nonatomic) WXPBGeneratedMessage *cacheResponse;
@property (copy, nonatomic) NSString *debugModuleName;
@property (nonatomic) unsigned int cgiNumber;
@property (retain, nonatomic) WXPBGeneratedMessage *request;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL isDataReportMonitor;
@property (nonatomic) BOOL isNeedNotify;
@property (nonatomic) BOOL isSpeedy;
@property (nonatomic) BOOL isTreatBaseResponseRetAsNetworkingRet;
@property (nonatomic) BOOL isAutoLifeCycle;
@property (nonatomic) double serverProcessCost;
@property (nonatomic) double totalTimeout;
@property (copy, nonatomic) NSData *respDecryptKey;
@property (nonatomic) unsigned long long cgiStatus;
@property (weak, nonatomic) id<WCBaseCgiDelegate> baseDelegate;
@property (nonatomic) BOOL longPolling;
@property (nonatomic) int longPollingTimeout;
@property (nonatomic) BOOL bindCellular;
@property (nonatomic) BOOL logResponseWithJsonFormat;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) Class cacheResponseClass;
@property (nonatomic) unsigned long long cacheDuration;
@property (nonatomic) unsigned long long cacheExpiredDate;
@property (copy, nonatomic) NSString *cacheExtraKey;
@property (nonatomic) BOOL needCGIProfile;
@property (retain, nonatomic) ProtobufCGIProfile *cgiProfile;
@property (retain, nonatomic) NSData *requestData;
@property (copy, nonatomic) NSString *cgiUrl;
@property (nonatomic) unsigned int channelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_debugModuleName;
+ (void)PBArrayAdd_cgiNumber;
+ (void)PBArrayAdd_request;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_isNeedNotify;
+ (void)PBArrayAdd_isAutoLifeCycle;
+ (void)PBArrayAdd_cgiStatus;
+ (void)PBArrayAdd_cacheType;
+ (void)PBArrayAdd_cacheDuration;
+ (void)PBArrayAdd_cacheExpiredDate;
+ (void)PBArrayAdd_eventID;
+ (void)initialize;
+ (id)genBaseRequestWithScene:(unsigned int)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)removeEvent;
- (void)clearResponseCache;
- (BOOL)prepareStart;
- (void)startWithoutCache;
- (void)failWithNetworking:(int)a0 response:(id)a1;
- (void)failWithNetworking:(int)a0 m_uiMessage:(int)a1 response:(id)a2;
- (BOOL)loadCache;
- (void)loadCacheImmediately;
- (id)expiredDateKey;
- (id)cacheResponseKey;
- (void)cacheResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didGetResponseData:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

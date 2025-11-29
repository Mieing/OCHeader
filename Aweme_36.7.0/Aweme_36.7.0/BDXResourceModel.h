@class NSString, NSNumber;

@interface BDXResourceModel : NSObject <BDSchemaModelProtocol>

@property (copy, nonatomic) NSString *enablePreload;
@property (copy, nonatomic) NSString *loaderName;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSNumber *dynamic;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableOffline;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *disableGecko;
@property (retain, nonatomic) NSNumber *disableBuiltin;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (retain, nonatomic) NSNumber *disableRequestReuse;
@property (retain, nonatomic) NSNumber *cdnTimeoutInterval;
@property (retain, nonatomic) NSNumber *mainQueueAsCompletionQueue;
@property (copy, nonatomic) NSString *forestSessionId;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (retain, nonatomic) NSNumber *enableLynxPredecode;
@property (retain, nonatomic) NSNumber *delayPreload;
@property (copy, nonatomic) NSString *preloadScene;
@property (retain, nonatomic) NSNumber *enableStreamLoad;
@property (retain, nonatomic) NSNumber *enableHttpHeader;
@property (retain, nonatomic) NSNumber *enableLooseLimit;
@property (retain, nonatomic) NSNumber *cdnExpiredTime;
@property (retain, nonatomic) NSNumber *enableLynxGenericFetcher;
@property (copy, nonatomic) NSString *ssrUrl;
@property (copy, nonatomic) NSString *ssrMode;
@property (retain, nonatomic) NSNumber *forestSyncLoad;
@property (retain, nonatomic) NSNumber *skipSSLCertificateError;
@property (retain, nonatomic) NSNumber *handleSSLError;
@property (retain, nonatomic) NSNumber *useTTNetWorkDownloader;
@property (retain, nonatomic) NSNumber *useNSURLSession;
@property (retain, nonatomic) NSNumber *syncCookieFromWKToNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end

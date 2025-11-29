@class NSString, NSDictionary, NSArray, NSNumber;

@interface HybridResourceSchemaParam : NSObject

@property (retain, nonatomic) NSDictionary *paramDict;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (retain, nonatomic) NSNumber *disableGecko;
@property (retain, nonatomic) NSNumber *disableBuiltin;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (nonatomic) BOOL lockResource;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSNumber *useForest;
@property (retain, nonatomic) NSNumber *dynamic;
@property (nonatomic) BOOL parallelFetchResource;
@property (nonatomic) BOOL cdnRegionRedirect;
@property (copy, nonatomic) NSArray *redirectRegions;

- (id)extractAccessKey;
- (id)extractDisableGecko;
- (id)extractDisableBuiltin;
- (id)extractDisableCDN;
- (id)extractDisableCDNCache;
- (id)extractEnableMemoryCache;
- (id)extractWaitGeckoUpdate;
- (id)extractOnlyLocal;
- (id)resolvedTaskConfigForLynxView:(id)a0;
- (id)extractURL;
- (id)extractChannel;
- (id)extractBundle;
- (id)extractDisableGeckoUpdate;
- (id)extractDynamic;
- (BOOL)extractLockResource;
- (id)extractSessionId;
- (id)extractUseForest;
- (id)resolvedTaskConfig:(id)a0;
- (id)getWaitGeckoUpdateFromDynamic:(id)a0;
- (id)initWithExtra:(id)a0;
- (id)resolvedTaskConfigForWebView:(id)a0;
- (void).cxx_destruct;

@end

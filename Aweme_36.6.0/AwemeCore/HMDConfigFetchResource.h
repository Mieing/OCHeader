@class NSString, HMDConfigStore;
@protocol HMDConfigDataProcess, HMDConfigHostProvider;

@interface HMDConfigFetchResource : NSObject <HMDConfigFetchResource>

@property (nonatomic) double lastFetchTime;
@property (retain, nonatomic) HMDConfigStore *store;
@property (retain, nonatomic) id<HMDConfigDataProcess> dataProcessor;
@property (retain, nonatomic) id<HMDConfigHostProvider> hostProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)optimizeType;
- (BOOL)useSettingsV5;
- (BOOL)configFetcher:(id)a0 finishRequestSuccess:(id)a1 penetrateParams:(id)a2 forAppID:(id)a3 useSettingsV5:(BOOL)a4;
- (id)configBodyDictionary;
- (id)fetchRequestForAppID:(id)a0 withRequestURL:(id)a1 params:(id)a2;
- (id)configBodyDictionaryV5WithAppIDs:(id)a0;
- (id)configBodyDictionaryForSettingsV5:(BOOL)a0 appIDs:(id)a1;
- (BOOL)configFetcher:(id)a0 finishRequestSuccess:(id)a1 penetrateParams:(id)a2 forAppID:(id)a3;
- (BOOL)configV5Fetcher:(id)a0 finishRequestSuccess:(id)a1 penetrateParams:(id)a2 forAppID:(id)a3;
- (BOOL)checkConfigIsOutOfDate;
- (id)fetchRequestAppIDList;
- (id)fetchRequestForAppID:(id)a0 atIndex:(unsigned long long)a1;
- (id)fetchRequestV5ForAppID:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)maxRetryCountForAppID:(id)a0;
- (id)initWithStore:(id)a0 dataProcessor:(id)a1 hostProvider:(id)a2;
- (void).cxx_destruct;

@end

@class NSMutableArray, NSMutableSet;

@interface MMWKWebViewProtector : NSObject

@property (retain, nonatomic) NSMutableArray *webViewRecrodList;
@property (nonatomic) long long websiteDataStoreOperatingCount;
@property (retain, nonatomic) NSMutableSet *websiteDataStoreHoldWebViewSet;

+ (void)addEachWebViewOnInitedFromMainThread:(id)a0;
+ (void)websiteDataStore:(id)a0 safeFromMainThreadRemoveDataOfTypes:(id)a1 modifiedSince:(id)a2 completionHandler:(id /* block */)a3;
+ (void)websiteDataStore:(id)a0 safeFromMainThreadRemoveDataOfTypes:(id)a1 forDataRecords:(id)a2 completionHandler:(id /* block */)a3;
+ (void)websiteDataStore:(id)a0 safeFromMainThreadFetchDataRecordsOfTypes:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sharedInstance;
+ (BOOL)isOpenProtection;
+ (BOOL)isProtectIOS13CrashIfWebViewDeallocOnWKWebsiteDataStoreOperateData;

- (void)__addEachWebViewOnInitedFromMainThread:(id)a0;
- (void)onWebViewDealloc;
- (id)webViewListFromWebViewRecordList:(id)a0;
- (BOOL)omitDeallocedWebViewInRecordList:(id)a0;
- (void)__websiteDataStore:(id)a0 safeFromMainThreadRemoveDataOfTypes:(id)a1 modifiedSince:(id)a2 completionHandler:(id /* block */)a3;
- (void)__websiteDataStore:(id)a0 safeFromMainThreadRemoveDataOfTypes:(id)a1 forDataRecords:(id)a2 completionHandler:(id /* block */)a3;
- (void)__websiteDataStore:(id)a0 safeFromMainThreadFetchDataRecordsOfTypes:(id)a1 completionHandler:(id /* block */)a2;
- (void)onWebsiteDataStoreOperateBegin;
- (void)onWebsiteDataStoreOperateEnd;
- (BOOL)isWebsiteDataStoreOperating;
- (void)holdWebViewsOnWebsiteDataStoreOperating:(id)a0;
- (void)removeHeldWebViewForWebsiteDataStoreOperating;
- (void).cxx_destruct;

@end

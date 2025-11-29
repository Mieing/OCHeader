@class NSMutableArray, CSJAppStorePreloadList;

@interface CSJAppStoreManager : NSObject

@property (retain, nonatomic) CSJAppStorePreloadList *preloadList;
@property (retain, nonatomic) NSMutableArray *presentingItemList;
@property (nonatomic) BOOL preloadOnlyWIFI;
@property (nonatomic) unsigned long long maxPreloadCount;
@property (nonatomic) BOOL isReusePreload;
@property (readonly, nonatomic) long long supportPreloadType;
@property (nonatomic) BOOL isPresentAnimated;
@property (nonatomic) double appStore_top;

+ (BOOL)hasControllerPreloadedByAppID:(id)a0;
+ (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 downloadUrl:(id)a2 adModel:(id)a3 byController:(id)a4 presentCompletion:(id /* block */)a5 dismissCompletion:(id /* block */)a6;
+ (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 isDuplicate:(BOOL)a3 completion:(id /* block */)a4;
+ (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 byController:(id)a3 presentCompletion:(id /* block */)a4 dismissCompletion:(id /* block */)a5;
+ (id)controllerPreloadedByAppID:(id)a0;
+ (void)clearPreloadCacheByAppID:(id)a0;
+ (void)clearPreloadCacheBySKController:(id)a0;
+ (BOOL)isAppStoreURL:(id)a0;
+ (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1;
+ (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1 completion:(id /* block */)a2;
+ (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 byController:(id)a2;
+ (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 byController:(id)a2 presentCompletion:(id /* block */)a3 dismissCompletion:(id /* block */)a4;
+ (id)duplicatedControllerWithAppID:(id)a0 dismiassAnimated:(BOOL)a1;
+ (id)appIDInURL:(id)a0;
+ (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 completion:(id /* block */)a3;
+ (id)sharedManager;

- (BOOL)hasControllerPreloadedByAppID:(id)a0;
- (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 downloadUrl:(id)a2 adModel:(id)a3 byController:(id)a4 presentCompletion:(id /* block */)a5 dismissCompletion:(id /* block */)a6;
- (long long)openAppStoreOpenTypeWithAppID:(id)a0 downloadUrl:(id)a1;
- (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 isDuplicate:(BOOL)a3 completion:(id /* block */)a4;
- (long long)openAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 byController:(id)a3 presentCompletion:(id /* block */)a4 dismissCompletion:(id /* block */)a5;
- (id)controllerPreloadedByAppID:(id)a0;
- (void)clearPreloadCacheByAppID:(id)a0;
- (void)clearPreloadCacheBySKController:(id)a0;
- (id)duplicatedControllerPreloadedByAppID:(id)a0 dismiassAnimated:(BOOL)a1;
- (id)currentPresentingItemList;
- (void)clearPreloadCache;
- (void)preloadAppStoreControllerWithAppID:(id)a0 param:(id)a1 adModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)isPresenting;
- (id)init;

@end

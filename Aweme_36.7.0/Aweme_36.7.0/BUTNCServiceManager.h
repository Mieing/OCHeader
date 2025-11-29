@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BUTNCServiceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (void)registerTNCServiceWithAppKey:(id)a0 tncDomains:(id)a1 tncPath:(id)a2 requestParam:(id /* block */)a3;
+ (void)unregisterTNCServiceWithAppKey:(id)a0;
+ (void)refreshTNCDomainsWithAppKey:(id)a0;
+ (id)TNCUrlWithBaseUrl:(id)a0 forRequest:(id)a1;
+ (id)sharedInstance;

- (void)_registerTNCServiceWithAppKey:(id)a0 tncDomains:(id)a1 tncPath:(id)a2 requestParam:(id /* block */)a3;
- (void)_unregisterTNCServiceWithAppKey:(id)a0;
- (id)_TNCUrlWithBaseUrl:(id)a0 forRequest:(id)a1;
- (void)_refreshTNCDomainsWithAppKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

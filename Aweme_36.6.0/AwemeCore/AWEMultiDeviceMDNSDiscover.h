@class NSNetServiceBrowser, NSMutableArray, NSString;
@protocol AWESCSearchMutuallyExclusiveTaskDelegate;

@interface AWEMultiDeviceMDNSDiscover : NSObject <NSNetServiceBrowserDelegate, AWESCSearchMutuallyExclusiveTask>

@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSMutableArray *servicesFounded;
@property (copy, nonatomic) id /* block */ discoverCompletion;
@property (retain, nonatomic) NSString *timerIdentify;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;

+ (id)sharedInstance;

- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;
- (void)stopSearch;
- (void)beginSearchServiceOfService:(id)a0 inDomain:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)stopSearchWithTimeOut:(BOOL)a0 deviceName:(id)a1;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (id)init;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;

@end

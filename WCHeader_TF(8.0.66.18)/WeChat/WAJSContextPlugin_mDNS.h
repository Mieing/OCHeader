@class NSString, NSNetServiceBrowser, MMTimer, NSMutableArray;

@interface WAJSContextPlugin_mDNS : WAJSContextPluginBase <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    int _serviceBrowserStatus;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableArray *_serviceFoundList;
    id /* block */ _startCompleteBlock;
    id /* block */ _stopCompleteBlock;
    MMTimer *_timerForStartScan;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)startMdnsScan:(id)a0 CompleteBlock:(id /* block */)a1;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)stopMdnsScan:(id /* block */)a0;
- (void)timeoutAfterServiceStartScan;
- (void)tryStopScan;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceWillResolve:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)notifyServiceLostToJSCore:(id)a0;
- (void)sendJSEventToAppService:(id)a0;
- (void).cxx_destruct;

@end

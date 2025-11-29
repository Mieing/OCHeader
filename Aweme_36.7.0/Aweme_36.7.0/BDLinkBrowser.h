@class NSURLSession, NSNetServiceBrowser, BDLinkUtils, BDLinkSsdpBrowser, NSMutableDictionary, NSMutableArray, NSString;
@protocol BDLinkBrowserDelegate;

@interface BDLinkBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, BDLinkSsdpBrowserDelegate>

@property (retain, nonatomic) NSNetServiceBrowser *netServiceBrowser;
@property (retain, nonatomic) BDLinkSsdpBrowser *ssdpBrowser;
@property (retain, nonatomic) NSMutableArray *netServiceArray;
@property (retain, nonatomic) NSMutableArray *bdLinkDeviceArray;
@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) BOOL browseBDLinkStarted;
@property (nonatomic) BOOL browseByteLinkStarted;
@property (nonatomic) unsigned long long lastBrowseType;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) BDLinkUtils *bdlinkUtils;
@property (nonatomic) long long bdlinkCacheCount;
@property (retain, nonatomic) NSMutableDictionary *cacheDeviceMonitorDic;
@property (weak, nonatomic) id<BDLinkBrowserDelegate> delegate;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkDeviceAlive:(long long)a0;
- (id)initWithServiceType:(id)a0 contextId:(id)a1;
- (id)discoveredBDLinkDeviceArray;
- (void)getDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)useMultiThreadForNetService;
- (void)handleDeviceOffline:(id)a0;
- (BOOL)needBrowseBDLink;
- (BOOL)needBrowseByteLink;
- (void)getDeviceInfo:(id)a0 andRetryInterval:(int)a1 isCheck:(BOOL)a2 fromCache:(BOOL)a3;
- (void)getDeviceInfo:(id)a0 andRetryInterval:(int)a1 isCheck:(BOOL)a2 fromCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)trackBDLinkDiskCacheCheckWithUrl:(id)a0 result:(BOOL)a1;
- (void)traceBrowseResultProtocolV2ForBDLink;
- (void)removeUnavailableDevice:(id)a0;
- (void)checkWithDevice:(id)a0 count:(long long)a1 maxCount:(long long)a2;
- (void)checkDeviceWithDevice:(id)a0 completion:(id /* block */)a1;
- (id)dictionaryFromTxtRecordData:(id)a0;
- (void)ssdpBrowser:(id)a0 didFindSsdpDevice:(id)a1;
- (void)ssdpBrowser:(id)a0 didRemoveSsdpDevice:(id)a1;
- (BOOL)isServiceTypeCanBleBrowse;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)stopBrowsing;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netService:(id)a0 didAcceptConnectionWithInputStream:(id)a1 outputStream:(id)a2;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceWillResolve:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)startBrowsing:(unsigned long long)a0;

@end

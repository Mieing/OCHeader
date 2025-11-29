@class NSString, NSArray, BDLinkUtils, NSMutableDictionary, BDAirPlayBrowser, BDLinkBrowser, NSObject, NSMutableArray, BDByteCastTimer, BDDlnaBrowser;
@protocol OS_dispatch_queue, BDByteCastBrowserDelegate;

@interface BDByteCastBrowser : NSObject <BDLinkBrowserDelegate, BDDlnaBrowserDelegate, BDAirPlayBrowserDelegate, NSObject>

@property (retain, nonatomic) BDDlnaBrowser *dlnaBrowser;
@property (retain, nonatomic) BDAirPlayBrowser *airPlayBrowser;
@property (retain, nonatomic) NSMutableArray *internalServiceArray;
@property (retain, nonatomic) BDLinkBrowser *bdlinkBrowser;
@property (nonatomic) BOOL totalBrowseStarted;
@property (nonatomic) BOOL allProtocolsBrowseStarted;
@property (copy, nonatomic) NSString *searchEventType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkAliveQueue;
@property (retain, nonatomic) BDByteCastTimer *checkTimer;
@property (nonatomic) BOOL isStartSearch;
@property (nonatomic) double startSearchTime;
@property (retain, nonatomic) NSMutableDictionary *trackingMap;
@property (retain, nonatomic) BDLinkUtils *bdlinkUtils;
@property (weak, nonatomic) id<BDByteCastBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *serviceArray;
@property (copy, nonatomic) NSString *privateChannel;
@property (nonatomic) unsigned long long deviceOfflineEnableType;
@property (nonatomic) long long checkAliveInterval;
@property (nonatomic) BOOL isPreSearch;
@property (nonatomic) BOOL enableCheckIpAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)searchServicesWithSdkType:(unsigned long long)a0;
- (void)airPlayBrowser:(id)a0 didFindByteCastServices:(id)a1;
- (void)airPlayBrowser:(id)a0 unavailableDevice:(id)a1;
- (void)linkDiscoveredDeviceUpdated:(id)a0;
- (id)getBDLinkServiceString;
- (BOOL)needCheckAliveWithType:(unsigned long long)a0;
- (void)checkDeviceAlive;
- (void)resetTrackingMap;
- (void)trackBrowseResult:(id)a0;
- (void)traceBrowseResultV2:(unsigned long long)a0 extra:(id)a1;
- (void)deleteService:(id)a0 sdkType:(unsigned long long)a1 index:(long long)a2;
- (id)serviceContent;
- (id)manufactureString;
- (void)trackBrowseCostEvent:(unsigned long long)a0;
- (void)tryAppendBDLinkInfo:(id)a0 withPortIndex:(long long)a1 completion:(id /* block */)a2;
- (void)bdlinkBrowser:(id)a0 unavailableLinkDevice:(id)a1;
- (void)bdlinkBrowser:(id)a0 onError:(id)a1;
- (void)dlnaBrowser:(id)a0 onError:(id)a1;
- (void)dlnaBrowser:(id)a0 didFindByteCastServices:(id)a1;
- (void)dlnaBrowser:(id)a0 didFindInvalidByteCastServices:(id)a1;
- (void)dlnaBrowser:(id)a0 unavailableDlnaDevice:(id)a1;
- (void)bdleBrowser:(id)a0 onError:(id)a1;
- (void)bdleBrowser:(id)a0 didFindBDLEServices:(id)a1;
- (void)bdleBrowser:(id)a0 unavailableBDLEService:(id)a1;
- (void)airPlayBrowser:(id)a0 onError:(id)a1;
- (void)searchServices;
- (void)parseQRCode:(id)a0 withCallback:(id /* block */)a1;
- (void)parsePinCode:(id)a0 withCallback:(id /* block */)a1;
- (void)tryAppendBDLinkInfo:(id)a0 withSuccessBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (void)stop;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end

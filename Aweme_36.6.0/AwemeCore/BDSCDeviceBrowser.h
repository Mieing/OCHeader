@class BDSCThrottleTrailing, NSMutableDictionary, NSURLSession, BDByteCastBrowser, NSMutableSet, NSString;
@protocol BDSCDeviceBrowserDelegate;

@interface BDSCDeviceBrowser : NSObject <BDByteCastBrowserDelegate, BDSCDeviceBrowserProtocol>

@property (retain, nonatomic) BDByteCastBrowser *byteCastBrowser;
@property (nonatomic) BOOL isBrowsing;
@property (retain, nonatomic) BDSCThrottleTrailing *throttle;
@property (nonatomic) long long didFindDeviceType;
@property (retain, nonatomic) NSMutableDictionary *sinkOSVersionCacheInfo;
@property (retain, nonatomic) NSMutableSet *tryRequestBDLinkIPSet;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (weak, nonatomic) id<BDSCDeviceBrowserDelegate> delegate;
@property (nonatomic) BOOL isPreSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)browser;

- (void)byteCastBrowser:(id)a0 onError:(id)a1;
- (void)byteCastBrowser:(id)a0 didFindByteCastServices:(id)a1;
- (void)byteCastBrowser:(id)a0 didFindInvalidByteCastServices:(id)a1;
- (void)byteCastBrowser:(id)a0 unavailableService:(id)a1 sdkType:(unsigned long long)a2 context:(id)a3;
- (void)stopSearch;
- (void)startSearch;
- (unsigned long long)searchDeviceSource;
- (void)invalidateSearchThrottle;
- (void)setupSearchThrottle;
- (id)getFinalServicesWith:(id)a0;
- (id)mergeSameService:(id)a0;
- (void)setupSinkOSVersionForDevices:(id)a0;
- (void)checkDidFindDeviceTypeWithDevices:(id)a0;
- (id)filerLinkTypeIfNeededWith:(id)a0;
- (void)tryRequestBDLinkByIPWithDevice:(id)a0;
- (id)generateVersionCodeForServerValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

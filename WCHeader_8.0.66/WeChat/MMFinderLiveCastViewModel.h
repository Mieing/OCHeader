@class MMLiveCastDeviceViewItem, NSString, NSArray, NSURL, WCFinderDataItem, MMLiveCastAirPlayViewItem, NSMutableDictionary, MMLiveCastMoreViewItem, MMFinderLiveTaskId, KSUPnPService;
@protocol MMFinderLiveCastViewModelDelegate;

@interface MMFinderLiveCastViewModel : NSObject <KSUPnPServiceObserver>

@property (retain, nonatomic) KSUPnPService *UPnPService;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) NSURL *liveCastURL;
@property (copy, nonatomic) NSArray *viewItems;
@property (retain, nonatomic) MMLiveCastAirPlayViewItem *airPlayViewItem;
@property (retain, nonatomic) NSMutableDictionary *cachedDeviceViewItems;
@property (copy, nonatomic) NSArray *deviceViewItems;
@property (retain, nonatomic) MMLiveCastDeviceViewItem *connectingDeviceViewItem;
@property (retain, nonatomic) MMLiveCastDeviceViewItem *castingDeviceViewItem;
@property (retain, nonatomic) MMLiveCastMoreViewItem *moreViewItem;
@property (weak, nonatomic) id<MMFinderLiveCastViewModelDelegate> delegate;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL disableMutePlay;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFinderDataItem:(id)a0 liveCastURL:(id)a1;
- (void)dealloc;
- (void)updateFinderDataItem:(id)a0 liveCastURL:(id)a1;
- (void)reloadViewItems;
- (void)didReloadViewItems;
- (id)generateAirPlayViewItemIfNeeded;
- (void)startAirPlay;
- (void)startDiscoveringDevices;
- (void)startDiscoveringDevicesWithTimeout;
- (void)startDiscoveringDevicesWithTimeoutInterval:(double)a0;
- (void)stopDiscoveringDevices;
- (id)getCacheOrGenerateDeviceViewItemWithDevice:(id)a0;
- (void)startCastingDevice:(id)a0;
- (void)stopConnectingDevice;
- (void)stopCastingDevice;
- (void)stopCastingDeviceWhenMediaDidEndPlay:(BOOL)a0;
- (id)generateMoreViewItem;
- (void)refreshMoreViewItemStatus;
- (void)UPnPService:(id)a0 didDiscoverDevice:(id)a1;
- (void)UPnPService:(id)a0 didUpdateDevice:(id)a1;
- (void).cxx_destruct;

@end

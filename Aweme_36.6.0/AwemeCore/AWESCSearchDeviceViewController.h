@class UIView, NSString, NSArray, DUXContentSheet, BDByteScreenCastTracker, BDByteScreenCastAppUIConfigInfo, BDSCSearchDeviceListView, BDSCBackgroundView;
@protocol BDByteScreenCastSearchDevicesViewDelegate;

@interface AWESCSearchDeviceViewController : UIViewController <BDByteScreenCastSearchDevicesView, DUXSheetDelegate, BDSCSearchDeviceListViewDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) BDSCSearchDeviceListView *listView;
@property (nonatomic) BOOL showAnimating;
@property (weak, nonatomic) UIView *popContainerView;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (nonatomic) unsigned long long viewType;
@property (weak, nonatomic) id<BDByteScreenCastSearchDevicesViewDelegate> delegate;
@property (nonatomic) BOOL isShowingSearchPage;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL hasLocalNetworkPermission;
@property (nonatomic) BOOL supportClarityLimit;
@property (nonatomic) BOOL isVPNActive;
@property (nonatomic) BOOL invalidDLNADeviceFound;
@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) BDByteScreenCastTracker *byteCastTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)currentConnectedDevice;
- (id)airPlayMirrorTipWithImage:(id)a0;
- (void)searchDeviceListView:(id)a0 deviceCellClicked:(id)a1;
- (void)searchDeviceListView:(id)a0 searchBtnClicked:(id)a1;
- (id)loadingViewForSearchDeviceListView:(id)a0;
- (id)noNetworkViewForSearchDeviceListView:(id)a0;
- (id)noDeviceViewForSearchDeviceListView:(id)a0;
- (BOOL)searchDeviceListViewCellShouldAnimate:(id)a0;
- (id)noPermissionViewForSearchDeviceListView:(id)a0;
- (id)vpnActiveViewForSearchDeviceListView:(id)a0;
- (void)showWithCompletion:(id /* block */)a0 fromParentViewController:(id)a1;
- (void)updateWifiInfoWithNetworkStatus:(long long)a0;
- (void)configBackgroundViewIfNeeded;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

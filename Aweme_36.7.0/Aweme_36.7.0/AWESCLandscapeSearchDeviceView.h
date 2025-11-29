@class UIView, NSString, NSArray, BDByteScreenCastAppUIConfigInfo, BDByteScreenCastTracker, UIButton, BDSCSearchDeviceListView, UIVisualEffectView, BDSCBackgroundView;
@protocol BDByteScreenCastSearchDevicesViewDelegate;

@interface AWESCLandscapeSearchDeviceView : UIView <UIGestureRecognizerDelegate, BDSCSearchDeviceListViewDelegate, BDByteScreenCastSearchDevicesView>

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) BDByteScreenCastTracker *byteCastTracker;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleTapAction;
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
- (void)setupSubview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class NSArray, DevicePresentCollectionView, CMessageWrap, NSString, NSMutableArray;

@interface DevicePresentSheetView : MMAutoLayoutSheetView <ScrollItemSelectionDelegate, IWCLanDeviceMsgForwardMgrExt>

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) NSArray *lanDevices;
@property (retain, nonatomic) NSMutableArray *privateDevices;
@property (retain, nonatomic) NSMutableArray *publicDevices;
@property (retain, nonatomic) DevicePresentCollectionView *oldDeviceView;
@property (nonatomic) BOOL didAppendDeviceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessageWrap:(id)a0;
- (void)dealloc;
- (void)initConfigs;
- (void)initData;
- (void)initView;
- (void)showSectionWithTitle:(id)a0 type:(long long)a1;
- (void)showNavitgateSection:(BOOL)a0;
- (BOOL)hasAvailableDevice;
- (id)titleLabel:(id)a0;
- (void)onNearbyCellClicked;
- (id)filteredDevicesOf:(long long)a0;
- (id)unfoldedItemsFrom:(id)a0 maxCount:(long long)a1;
- (id)foldedItemsFrom:(id)a0 maxCount:(long long)a1;
- (void)onSelectItem:(id)a0;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)a0;
- (void).cxx_destruct;

@end

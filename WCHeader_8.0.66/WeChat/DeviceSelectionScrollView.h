@class NSArray, NSString;
@protocol ScrollItemSelectionDelegate;

@interface DeviceSelectionScrollView : MMScrollStack <MMIconItemDelegate>

@property (retain, nonatomic) NSArray *privateDevices;
@property (nonatomic) BOOL privateDevicesHasMore;
@property (nonatomic) BOOL privateDevicesHasOthers;
@property (retain, nonatomic) NSArray *publicDevices;
@property (nonatomic) BOOL publicDevicesHasMore;
@property (weak, nonatomic) id<ScrollItemSelectionDelegate> selectDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPrivateDevices:(id)a0 privateDevicesHasMore:(BOOL)a1 privateDevicesHasOthers:(BOOL)a2 publicDevices:(id)a3 publicDevicesHasMore:(BOOL)a4 delegate:(id)a5;
- (void)initView;
- (void)addOthersIcon;
- (void)addMoreIconView:(long long)a0;
- (void)onItemClicked:(id)a0;
- (void).cxx_destruct;

@end

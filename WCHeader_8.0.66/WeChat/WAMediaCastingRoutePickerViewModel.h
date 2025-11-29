@class WAMediaCastingRoutePickerDeviceItem, NSArray, NSString, WAMediaCastingRoutePickerRencentDevicePool;
@protocol WAMediaCastingRoutePickerViewModelDelegate;

@interface WAMediaCastingRoutePickerViewModel : NSObject

@property (retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *airPlayDevice;
@property (retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *currentDevice;
@property (copy, nonatomic) NSArray *availableDeviceList;
@property (retain, nonatomic) WAMediaCastingRoutePickerRencentDevicePool *recentDevicePool;
@property (copy, nonatomic) NSString *guideURLString;
@property (copy, nonatomic) NSString *titleLocalString;
@property (copy, nonatomic) NSString *guidLocalString;
@property (copy, nonatomic) NSString *recentDeviceLocalString;
@property (copy, nonatomic) NSString *availableDeviceLocalString;
@property (nonatomic) unsigned long long currentDeviceStatus;
@property (nonatomic) BOOL isSearching;
@property (weak, nonatomic) id<WAMediaCastingRoutePickerViewModelDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *lastConnectedDeviceList;
@property (readonly, copy, nonatomic) NSString *guideLocalString;

- (id)init;
- (void)updateUpnpDeviceList:(id)a0;
- (void)updateSearchingStatus:(BOOL)a0;
- (void)updateCurrentDevice:(id)a0;
- (void)updateCurrentDeviceStatus:(unsigned long long)a0;
- (void)appendLastConnectDevice:(id)a0;
- (void)notifyDataChanged;
- (void)notifySearchingStatusChanged;
- (void)notifyCurrentDeviceStatusChanged;
- (void).cxx_destruct;

@end

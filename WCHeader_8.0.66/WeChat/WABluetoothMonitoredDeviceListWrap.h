@class NSString, NSMutableArray;

@interface WABluetoothMonitoredDeviceListWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_deviceList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

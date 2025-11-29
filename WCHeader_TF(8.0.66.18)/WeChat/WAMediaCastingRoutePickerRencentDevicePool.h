@class NSArray;

@interface WAMediaCastingRoutePickerRencentDevicePool : NSObject

@property (copy, nonatomic) NSArray *lastConnectedDeviceList;

+ (id)sharedInstance;

- (void)appendDevice:(id)a0;
- (void)saveToDisk;
- (id)recoverFromDisk;
- (void).cxx_destruct;

@end

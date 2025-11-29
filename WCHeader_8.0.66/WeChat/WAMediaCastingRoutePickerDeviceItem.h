@class NSString, WAMediaCastingUpnpDevice;

@interface WAMediaCastingRoutePickerDeviceItem : NSObject

@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WAMediaCastingUpnpDevice *upnpDevice;

+ (id)deviceItemUpnp:(id)a0;
+ (id)deviceItemAirPlay;

- (void).cxx_destruct;

@end

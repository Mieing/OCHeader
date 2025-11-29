@class KSUPnPDevice, KSUPnPDeviceService;

@interface KSUPnPController : NSObject

@property (readonly, weak, nonatomic) KSUPnPDevice *device;
@property (readonly, nonatomic) KSUPnPDeviceService *service;

+ (Class)controllerClassForServiceType:(id)a0;

- (id)initWithDevice:(id)a0 service:(id)a1;
- (void).cxx_destruct;

@end

@class KSUPnPController_AVTransport, KSUPnPDevice;

@interface MMLiveCastDeviceViewItem : MMLiveCastViewItem

@property (retain, nonatomic) KSUPnPController_AVTransport *AVTransportController;
@property (readonly, nonatomic) KSUPnPDevice *device;

- (id)initWithDevice:(id)a0;
- (void)reloadValuesFromDevice;
- (void)startCastingWithURL:(id)a0 title:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopCastingWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end

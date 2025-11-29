@class MPVolumeView, NSString, AVRoutePickerView, BDAirPlayDevice, UIScreen, UIWindow;
@protocol BDAirPlayConnectionDelegate;

@interface BDAirPlayConnection : NSObject <AVRoutePickerViewDelegate, BDByteCastConnectionProtocol>

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL isDisConnecting;
@property (retain, nonatomic) AVRoutePickerView *pickerView;
@property (copy, nonatomic) NSString *sessionUID;
@property (retain, nonatomic) MPVolumeView *volumeView;
@property (weak, nonatomic) id<BDAirPlayConnectionDelegate> delegate;
@property (readonly, nonatomic) BDAirPlayDevice *airPlayDevice;
@property (readonly, nonatomic) UIScreen *secondScreen;
@property (readonly, nonatomic) UIWindow *secondWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioSessionDidChange:(id)a0;
- (void)showAirPlayDevicePicker;
- (void)disConnect;
- (BOOL)isUsingAirPlay;
- (id)getCurAirPlaySessionUID;
- (void)updatedReceiverDeviceDuringConnecting;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)connect;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;

@end

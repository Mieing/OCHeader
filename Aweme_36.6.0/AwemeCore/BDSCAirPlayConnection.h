@class AVRoutePickerView, MPVolumeView, NSString, BDSCAirPlayDevice;
@protocol BDSCConnectionDelegate;

@interface BDSCAirPlayConnection : NSObject <AVRoutePickerViewDelegate, BDSCConnectionProtocol>

@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) BDSCAirPlayDevice *device;
@property (retain, nonatomic) AVRoutePickerView *pickerView;
@property (retain, nonatomic) MPVolumeView *volumeView;
@property (weak, nonatomic) id<BDSCConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *protocolType;
@property (readonly, nonatomic) id engine;

+ (id)connectionWithDevice:(id)a0 delegate:(id)a1;
+ (BOOL)canCreateByDevice:(id)a0;

- (void)audioSessionDidChange:(id)a0;
- (void)showAirPlayDevicePicker;
- (void)registerWithCallback:(id /* block */)a0;
- (void)unregisterWithCallback:(id /* block */)a0;
- (void)disConnect;
- (BOOL)isUsingAirPlay;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void)setMessageReceivedCallback:(id /* block */)a0;
- (void)updateSortedProtocolArray:(id)a0;
- (void).cxx_destruct;
- (void)connect;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;

@end

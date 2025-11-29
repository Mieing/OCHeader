@class NSMutableArray, IESLiveActionSheetViewController;

@interface IESLiveConcertTuningJSBHandler : IESLiveConcertBaseJSBHandler

@property (retain, nonatomic) NSMutableArray *remoteVolumeUserArray;
@property (nonatomic) BOOL storeHeadphonesMonitor;
@property (weak, nonatomic) IESLiveActionSheetViewController *audioDeviceChooseSheetVC;
@property (nonatomic) long long headsetType;

- (id)initWithEventDelegate:(id)a0 dataSource:(id)a1;
- (void)updateStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)getStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)headsetDetect;
- (void)audioSessionRouteChangeNotification:(id)a0;
- (void)p_showSheetIfIsMultiKTVAndAudioChangeToNotBluetoothHFPWithRouteChangeReason:(unsigned long long)a0;
- (void)p_showAudioDeviceChooseAlertIfNotBluetooth;
- (BOOL)isOpenBluetooth;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (id)bizId;

@end

@class MPVolumeView, AVPlayer, AVRoutePickerView;
@protocol AWEDemaciaPlayerAirPlayManagerDelegate;

@interface AWEDemaciaPlayerAirPlayManager : NSObject

@property (retain, nonatomic) AVRoutePickerView *pickerView;
@property (retain, nonatomic) MPVolumeView *volumnView;
@property (nonatomic) BOOL connectedToAirPlay;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL didStartPlaying;
@property (readonly, nonatomic) BOOL isConnectedToAirPlay;
@property (weak, nonatomic) id<AWEDemaciaPlayerAirPlayManagerDelegate> delegate;

+ (id)sharedInstance;

- (void)audioSessionDidChange:(id)a0;
- (void)stopAirPlay;
- (id)currentAirPlayDeviceName;
- (void)reCreatePlayerAndPlay:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)observingPlayerKeyPath;
- (void)showAirPlayDevicePicker;
- (void)startAirPlayIfNeeded;
- (long long)currentTimeControlStatus;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)appWillTerminate:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end

@class MPVolumeView, NSTimer, UISlider, BDPAudioSessionLock;

@interface BDPPluginScreenVolume : BDPBridgeInstancePlugin

@property (retain, nonatomic) MPVolumeView *volumeView;
@property (retain, nonatomic) UISlider *volumeSlider;
@property (retain, nonatomic) NSTimer *removetimer;
@property (nonatomic) long long setVolumeCount;
@property (nonatomic) long long getVolumeCount;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;

- (void)setSystemVolumeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSystemVolumeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

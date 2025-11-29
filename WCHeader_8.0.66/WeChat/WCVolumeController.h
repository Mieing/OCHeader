@class WCVolumeView;

@interface WCVolumeController : NSObject

@property (retain, nonatomic) WCVolumeView *volumeView;
@property (nonatomic) BOOL needHidden;

+ (void)VoIP_queryValueWithCompletion:(id /* block */)a0;
+ (void)VoIP_executeInAudioSessionQueue:(id /* block */)a0;
+ (void)queryValueWithCompletion:(id /* block */)a0 inQueue:(id)a1;
+ (void)queryValueWithCompletion:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void)configValue:(float)a0 withCompletion:(id /* block */)a1;
- (void)needHiddenVolumeSlider:(BOOL)a0;
- (BOOL)addVolumeViewToSystem:(id /* block */)a0;
- (void).cxx_destruct;

@end

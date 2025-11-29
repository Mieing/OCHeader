@class MPVolumeView;

@interface RTVVoipSystemVolumeManager : NSObject {
    double _volumn;
}

@property (retain, nonatomic) MPVolumeView *volumeView;

+ (BOOL)isEarphone;
+ (id)sharedManager;

- (id)volumnViewSlider;
- (id)p_createVolumeView;
- (void)clearVolumeView;
- (void)beginRemoteForSystemVolumeChange;
- (void)setVolumn:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end

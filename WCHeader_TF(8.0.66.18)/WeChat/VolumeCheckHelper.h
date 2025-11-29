@class WeToast;

@interface VolumeCheckHelper : MMObject {
    BOOL m_bHasShowVolumeTip;
}

@property (retain, nonatomic) WeToast *toast;

+ (id)getVolumeCheckHelper;
+ (void)freeVolumeCheckHelper;

- (id)init;
- (void)dealloc;
- (void)checkVolume;
- (void)stopShowVolumeTip;
- (void)showVolumeTip;
- (void)volumeChanged:(id)a0;
- (void).cxx_destruct;

@end

@class AWEStudioEditMusicVolumeConfig;

@interface AWEStudioEditMusicFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL selectMusicButtonEnabled;
@property (nonatomic) BOOL enableSelectMusicAutomatically;
@property (readonly, nonatomic) AWEStudioEditMusicVolumeConfig *volumeConfig;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end

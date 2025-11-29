@class MPVolumeView;

@interface SystemVolumeAdjuster : NSObject

@property (retain, nonatomic) MPVolumeView *volumeView;
@property (nonatomic) float originalVolume;
@property (nonatomic) float setVolume;

- (id)init;
- (void)dealloc;
- (void)setVolume:(float)a0;
- (void)setVolume:(float)a0 willSetBlock:(id /* block */)a1;
- (void)restoreOriginalVolume;
- (void)__setVolume:(float)a0 isCleanStep:(BOOL)a1;
- (void).cxx_destruct;

@end

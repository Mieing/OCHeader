@class BDNativeLiveVideoView, NSString;

@interface BDNativeLiveComponent : BDNativeWebBaseComponent <BDNativeLiveVideoViewPlayerDelegate>

@property (nonatomic) BOOL autoPlay;
@property (weak, nonatomic) BDNativeLiveVideoView *videoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (id)insertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)updateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)deleteInNativeContainerObject:(id)a0 params:(id)a1;
- (void)didError:(id)a0;
- (void)didStall;
- (void)didReady;
- (void)handleAutoplayWithVideoView:(id)a0 params:(id)a1;
- (void)handleControlsWithVideoView:(id)a0 params:(id)a1;
- (void)handleMutedWithVideoView:(id)a0 params:(id)a1;
- (void)handlePoster:(id)a0 params:(id)a1;
- (void)handleSrcWithVideoView:(id)a0 params:(id)a1;
- (void)handleVolumeWithVideoView:(id)a0 params:(id)a1;
- (void)handleObjectFitWithImageView:(id)a0 params:(id)a1;
- (void)didVideoSizChange:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didIdle;
- (void)didStop;
- (void)didPause;
- (void)didResume;
- (void)didPlay;

@end

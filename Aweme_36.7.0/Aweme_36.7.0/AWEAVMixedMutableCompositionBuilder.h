@class NSObject;
@protocol ACCEditVideoDataProtocol;

@interface AWEAVMixedMutableCompositionBuilder : AWEAVMutableCompositionBuilder

@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;

- (void)setTotalRate:(id)a0;
- (id)getCompileSessionWithSuggestedSize:(struct CGSize { double x0; double x1; })a0 suggestedAudioRate:(long long)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })checkTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forAsset:(id)a1;
- (void)addAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 adjust:(BOOL)a2;
- (void)setClipTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forAsset:(id)a1 adjust:(BOOL)a2;
- (struct CGSize { double x0; double x1; })targetSizeWithIsForPlayDisplay:(BOOL)a0;
- (void)moveAssetFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)setRotateType:(unsigned long long)a0 forAsset:(id)a1;
- (void)setRate:(double)a0 forAsset:(id)a1;
- (id)getPlayerItem;
- (id)getPlayerItemWithBookkeepingRange;
- (void)updateVideoDataClipInfoForBookkeepingRange:(BOOL)a0;
- (void)commonConfigVideoData:(id)a0;
- (void)setCroppingParamsIfNeededWithVideoData:(id)a0;
- (id)getPlayerData;
- (id)getPlayerDataWithBookkeepingRange;
- (void)setTransformInfo:(id)a0 forAsset:(id)a1;
- (void)setMediaInfoForSinglePictureAsset;
- (id)getCompileSession;
- (id)getCompileSessionWithTransform:(id)a0;
- (id)getCompileSessionWithVideoData:(id)a0;
- (void)updateVideoFromLv:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeAsset:(id)a0;

@end

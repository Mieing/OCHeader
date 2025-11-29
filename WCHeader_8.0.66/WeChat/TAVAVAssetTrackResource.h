@class AVAsset;

@interface TAVAVAssetTrackResource : TAVResource

@property (retain, nonatomic) AVAsset *asset;

- (id)initWithAsset:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tracksForType:(id)a0;
- (id)trackInfoForType:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;

@end

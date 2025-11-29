@class AVAsset;

@interface IESSCAVAssetTrackMedia : IESSCMedia

@property (retain, nonatomic) AVAsset *asset;

- (id)tracksForType:(id)a0;
- (id)trackInfoForType:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;

@end

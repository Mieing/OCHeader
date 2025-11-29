@class AVAsset, NSDictionary, NSString, NSError, NSArray, AVAssetTrack;

@interface IESAVAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *formattedDict;
@property (retain, nonatomic) AVAsset *asset;
@property unsigned long long status;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) AVAssetTrack *videoTrack;
@property (readonly, copy, nonatomic) NSArray *audioTracks;

- (void)setupAssetWithLoadKeys:(id)a0;
- (void)monitorWithStatusMonitor:(long long)a0 extraParams:(id)a1;
- (float)estimateAudioBitrate;
- (id)sortedFormattedKeys;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)initWithAsset:(id)a0 automaticallyLoadedAssetKeys:(id)a1;

@end

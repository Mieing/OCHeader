@class AVAsset, AVVideoComposition, NSString;

@interface VEVideoFetchAsset : NSObject <VEFetchAssetProtocol>

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoCompostion;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } assetDuration;
@property (readonly, nonatomic) long long totalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

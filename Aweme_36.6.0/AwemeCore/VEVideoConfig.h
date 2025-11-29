@class AVAsset, NSURL, VEVideoFillConfig, IESMMVideoDataClipRange, IESMMCurveSource;

@interface VEVideoConfig : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) IESMMVideoDataClipRange *clipRange;
@property (nonatomic) double rate;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) BOOL useUserPixelFormat;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } compositionRange;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) IESMMCurveSource *curveSource;
@property (nonatomic) unsigned long long readerType;
@property (retain, nonatomic) NSURL *picUrl;
@property (retain, nonatomic) NSURL *originalPicUrl;
@property (nonatomic) long long maxCacheCount;
@property (nonatomic) BOOL useForPlayer;
@property (nonatomic) BOOL alwaysFirstFrame;
@property (nonatomic) BOOL useForMattingDecoder;
@property (nonatomic) long long targetFPS;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;

- (void).cxx_destruct;
- (id)init;

@end

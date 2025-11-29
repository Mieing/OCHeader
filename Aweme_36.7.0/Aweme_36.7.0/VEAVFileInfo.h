@interface VEAVFileInfo : NSObject

@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) unsigned int codecType;
@property (nonatomic) long long bitrate;
@property (nonatomic) double audioDuration;
@property (nonatomic) double videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)init;
- (id)initWithAsset:(id)a0;

@end

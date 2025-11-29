@interface IESVideoInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (nonatomic) float frameRate;
@property (nonatomic) float bitrate;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

+ (id)invalidVideoInfo;

- (id)description;

@end

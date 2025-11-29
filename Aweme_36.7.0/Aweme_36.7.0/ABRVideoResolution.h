@interface ABRVideoResolution : NSObject <NSCopying>

@property (nonatomic) int level;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int videoCaptureWidth;
@property (nonatomic) int videoCaptureHeight;
@property (nonatomic) int minBitrate;
@property (nonatomic) int defaultBitrate;
@property (nonatomic) int maxBitrate;
@property (nonatomic) int fps;
@property (nonatomic) int upperLine;
@property (nonatomic) int bottomLine;

+ (id)defaultResolutionWithLevel:(int)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

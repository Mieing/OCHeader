@interface CGPAVVideoStreamingParameter : GPBMessage

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int frameRate;
@property (nonatomic) int maxKbps;
@property (nonatomic) int minKbps;
@property (nonatomic) int resolution;

+ (id)descriptor;

@end

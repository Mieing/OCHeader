@interface AWEStudioImageCompressConfig : NSObject

@property (nonatomic) BOOL keepRatio;
@property (nonatomic) double quality;
@property (nonatomic) double targetHeight;
@property (nonatomic) double targetWidth;

- (id)init;

@end

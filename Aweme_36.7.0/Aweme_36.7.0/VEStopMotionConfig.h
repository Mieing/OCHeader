@class AVAsset, NSString;

@interface VEStopMotionConfig : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSString *resultPath;
@property (retain, nonatomic) NSString *resourcePath;
@property (nonatomic) struct CGSize { double width; double height; } algorithmSize;
@property (nonatomic) double shadowStartTime;
@property (nonatomic) double stopMotionInterval;

- (void).cxx_destruct;

@end

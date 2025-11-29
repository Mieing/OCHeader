@class NSString;

@interface IESLiveCameraConfig : NSObject

@property (nonatomic) long long cameraPosition;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) NSString *capturePreset;

- (void).cxx_destruct;

@end

@class NSString;

@interface SonicCameraConfig : NSObject

@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *devicePosition;

- (struct CGSize { double x0; double x1; })realFrameSize;
- (void).cxx_destruct;

@end

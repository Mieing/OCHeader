@interface VECaptureFrameConfig : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } atTime;
@property (nonatomic) BOOL useOriginColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL needProcess;
@property (nonatomic) BOOL isLastImage;
@property (nonatomic) BOOL cancelLastRequest;
@property (nonatomic) BOOL isMV;

@end

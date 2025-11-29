@class IESMMCaptureOptions;

@interface AWEStudioCameraPictureQualityModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } hdCaptureSize;
@property (nonatomic) long long hdPhotoQuality;
@property (retain, nonatomic) IESMMCaptureOptions *captureOption;

- (void).cxx_destruct;

@end

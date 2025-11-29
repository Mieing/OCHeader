@class NSString, UIImage, VERawParam;

@interface IESMMCaptureOptions : NSObject

@property (nonatomic) long long captureMode;
@property (nonatomic) BOOL disableEffects;
@property (nonatomic) BOOL disableShapeCrop;
@property (nonatomic) BOOL usePixelBuffer;
@property (nonatomic) BOOL forceUseCustomCaptureSize;
@property (nonatomic) struct CGSize { double width; double height; } customCaptureSize;
@property (nonatomic) BOOL enableRefFrame;
@property (nonatomic) BOOL forceExtractOrig;
@property (nonatomic) struct CGSize { double width; double height; } captureSizeHD;
@property (nonatomic) long long faceBeautifyType;
@property (nonatomic) BOOL enableFaceBeautifyDebug;
@property (retain, nonatomic) NSString *HDRPath;
@property (retain, nonatomic) UIImage *customPhoto;
@property (nonatomic) BOOL captureByUser;
@property (nonatomic) long long devicePosition;
@property (nonatomic) BOOL previewImageEnabled;
@property (nonatomic) long long previewImageMaxSide;
@property (nonatomic) BOOL useCaptureSampleBuf;
@property (nonatomic) long long customPhotoQuality;
@property (nonatomic) BOOL optMemAfterTakePhoto;
@property (nonatomic) BOOL captureImageWhenVideoCaptureStopped;
@property (nonatomic) BOOL rawCaptureEnabled;
@property (retain, nonatomic) VERawParam *rawParam;
@property (retain, nonatomic) NSString *originImageSaveLocation;
@property (nonatomic) struct CGSize { double width; double height; } originImageCropSize;

- (void).cxx_destruct;
- (id)init;

@end

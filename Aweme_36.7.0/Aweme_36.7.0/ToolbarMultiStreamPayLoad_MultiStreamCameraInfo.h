@class NSString;

@interface ToolbarMultiStreamPayLoad_MultiStreamCameraInfo : IESLivePBBaseMessage

@property (nonatomic) long long cameraId;
@property (nonatomic) long long streamId;
@property (copy, nonatomic) NSString *loadingText;
@property (copy, nonatomic) NSString *switchSuccToast;
@property (nonatomic) int cameraScene;
@property (nonatomic) int cameraType;
@property (copy, nonatomic) NSString *animationURL;
@property (copy, nonatomic) NSString *logPb;

+ (id)descriptor;

@end

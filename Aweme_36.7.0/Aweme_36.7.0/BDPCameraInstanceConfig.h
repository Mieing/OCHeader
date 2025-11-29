@class AVCaptureDeviceInput, NSString, AVCaptureAudioDataOutput, BDPCameraModel, AVCaptureVideoDataOutput, BDPUniqueID, AVCaptureOutput;
@protocol BDPCameraInstanceProtocol;

@interface BDPCameraInstanceConfig : NSObject

@property (weak, nonatomic) id<BDPCameraInstanceProtocol> instance;
@property double zoomFactor;
@property (nonatomic) long long pageID;
@property (nonatomic) long long cameraType;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) BDPCameraModel *cameraModel;
@property (copy, nonatomic) NSString *apiName;
@property (retain) AVCaptureDeviceInput *input;
@property (retain) AVCaptureOutput *output;
@property (retain) AVCaptureDeviceInput *audioInput;
@property (retain) AVCaptureAudioDataOutput *audioOutput;
@property (retain) AVCaptureVideoDataOutput *outputScan;
@property (nonatomic) BOOL compressedVideo;
@property (nonatomic) long long cameraMode;

- (void).cxx_destruct;

@end

@class NSString;
@protocol SonicCameraCallback;

@interface SonicCameraDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (retain, nonatomic) id<SonicCameraCallback> callback_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

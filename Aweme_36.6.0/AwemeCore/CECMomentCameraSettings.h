@class NSString;

@interface CECMomentCameraSettings : NSObject

@property (nonatomic) BOOL showAlertCameraSwitchToSingle;
@property (copy, nonatomic) NSString *switchToSingleAlertContent;
@property (nonatomic) double showDetectFaceToastStartTime;
@property (copy, nonatomic) NSString *detectFaceToastContent;

- (void).cxx_destruct;

@end

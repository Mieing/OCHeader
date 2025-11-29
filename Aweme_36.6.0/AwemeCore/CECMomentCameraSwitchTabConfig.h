@class NSNumber;

@interface CECMomentCameraSwitchTabConfig : NSObject

@property (nonatomic) BOOL isEnterFromShoot;
@property (nonatomic) long long shootCameraPosition;
@property (nonatomic) BOOL shootFlashOn;
@property (nonatomic) long long momentCameraCameraPosition;
@property (nonatomic) BOOL momentCameraFlashOn;
@property (nonatomic) long long lastMode;
@property (nonatomic) long long time;
@property (nonatomic) BOOL isEnterOtherTab;
@property (nonatomic) BOOL isFirstEnterMomentCamera;
@property (nonatomic) BOOL enableDropDownClose;
@property (nonatomic) BOOL enableSKIIEmbededMainRecorder;
@property (retain, nonatomic) NSNumber *lastBeautyStatus;

- (void).cxx_destruct;
- (id)init;

@end

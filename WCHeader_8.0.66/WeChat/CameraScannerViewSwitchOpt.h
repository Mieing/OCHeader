@class NSString;

@interface CameraScannerViewSwitchOpt : NSObject

@property (nonatomic) unsigned int focusOSType;
@property (nonatomic) unsigned long long checkLensCount;
@property (nonatomic) unsigned long long configSwitchCount;
@property (nonatomic) double lastLensPosition;
@property (nonatomic) unsigned long long switchToUltraWideCount;
@property (nonatomic) unsigned long long switchToAngleWideCount;
@property (nonatomic) BOOL isSwitchExp;
@property (nonatomic) unsigned long long skipFirstCheck;
@property (nonatomic) BOOL needReport;
@property (nonatomic) BOOL currentDeviceIsUltraBySys;
@property (nonatomic) unsigned long long firstNormalCount;
@property (nonatomic) BOOL enableAutoSwitch;
@property (nonatomic) unsigned long long checkInterval;
@property (nonatomic) double initTime;
@property (retain, nonatomic) NSString *lensSquence;
@property (nonatomic) BOOL enableFirstFlashOpt;
@property (nonatomic) BOOL closeSysAutoSwitch;
@property (nonatomic) BOOL enableFirstDaulOpt;
@property (nonatomic) unsigned long long skipCameraChangeInterval;
@property (nonatomic) unsigned long long cameraChangeSkipCount;
@property (nonatomic) unsigned long long firstNormalFrame;
@property (nonatomic) unsigned long long frameCount;
@property (retain, nonatomic) NSString *firstLensSquence;
@property (nonatomic) BOOL enableCenterFocus;
@property (nonatomic) BOOL enableCenterFocusOnlyIOS26;
@property (retain, nonatomic) NSString *iOS26SupportVersion;
@property (nonatomic) BOOL enableCenterFocusOnlyMacroMode;
@property (nonatomic) BOOL useCenterFocusSimpleMode;
@property (nonatomic) unsigned long long firstFocusTime;
@property (nonatomic) unsigned long long centerFocusCount;
@property (nonatomic) unsigned long long centerFocusMaxCount;
@property (nonatomic) unsigned long long centerFocusInterval;

- (void)setFocusOSType:(unsigned int)a0;
- (unsigned int)focusOSType;
- (id)init;
- (void).cxx_destruct;

@end

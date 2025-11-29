@class NSString;

@interface DTFLanguageCustomFaceConfig : NSObject

@property (copy, nonatomic) NSString *faceNotFound;
@property (copy, nonatomic) NSString *faceTooFar;
@property (copy, nonatomic) NSString *faceTooClose;
@property (copy, nonatomic) NSString *faceNotIn;
@property (copy, nonatomic) NSString *badPitch;
@property (copy, nonatomic) NSString *badYaw;
@property (copy, nonatomic) NSString *faceTooMore;
@property (copy, nonatomic) NSString *faceIsMoving;
@property (copy, nonatomic) NSString *faceBrightless;
@property (copy, nonatomic) NSString *faceBadQuality;
@property (copy, nonatomic) NSString *eyesOnScreen;
@property (copy, nonatomic) NSString *blink;
@property (copy, nonatomic) NSString *leftYaw;
@property (copy, nonatomic) NSString *rightYaw;
@property (copy, nonatomic) NSString *stackTime;
@property (copy, nonatomic) NSString *isBlur;
@property (copy, nonatomic) NSString *faceInitTxt;
@property (copy, nonatomic) NSString *faceTitleBlink;
@property (copy, nonatomic) NSString *leftYawLiveness;
@property (copy, nonatomic) NSString *rightYawLiveness;
@property (copy, nonatomic) NSString *photinusCommTips;
@property (copy, nonatomic) NSString *processing;
@property (copy, nonatomic) NSString *dialogTimeOutTitle;
@property (copy, nonatomic) NSString *dialogTimeOutMsg;
@property (copy, nonatomic) NSString *dialogTimeOutConfirm;
@property (copy, nonatomic) NSString *dialogInterruptTitle;
@property (copy, nonatomic) NSString *dialogInterruptConfirm;
@property (copy, nonatomic) NSString *dialogInterruptCancel;
@property (copy, nonatomic) NSString *dialogTooManyRetriesTitle;
@property (copy, nonatomic) NSString *dialogTooManyRetriesMsg;
@property (copy, nonatomic) NSString *dialogTooManyRetriesConfirm;
@property (copy, nonatomic) NSString *dialogExitTitle;
@property (copy, nonatomic) NSString *dialogExitMsg;
@property (copy, nonatomic) NSString *dialogExitConfirm;
@property (copy, nonatomic) NSString *dialogExitCancel;
@property (copy, nonatomic) NSString *dialogCamOpenFailedTitle;
@property (copy, nonatomic) NSString *dialogCamOpenFailedMsg;
@property (copy, nonatomic) NSString *dialogCamOpenFailedCancel;
@property (copy, nonatomic) NSString *dialogCamOpenFailedConfirm;
@property (copy, nonatomic) NSString *dialogArchSysFailedTitle;
@property (copy, nonatomic) NSString *dialogArchSysFailedMsg;
@property (copy, nonatomic) NSString *dialogArchSysFailedConfirm;
@property (copy, nonatomic) NSString *dialogSDKErrTitle;
@property (copy, nonatomic) NSString *dialogSDKErrMsg;
@property (copy, nonatomic) NSString *dialogSDKErrConfirm;
@property (copy, nonatomic) NSString *dialogNetworkFailedTitle;
@property (copy, nonatomic) NSString *dialogNetworkFailedMsg;
@property (copy, nonatomic) NSString *dialogNetworkFailedConfirm;
@property (copy, nonatomic) NSString *settingFailReason;
@property (copy, nonatomic) NSString *verifyNotice;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

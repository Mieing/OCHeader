@class NSString;

@interface DTFFaceConfig : NSObject

@property (copy, nonatomic) NSString *faceBgColor;
@property (copy, nonatomic) NSString *faceTitleColor;
@property (copy, nonatomic) NSString *circleTxtBgAlpha;
@property (copy, nonatomic) NSString *dialogBgAlpha;
@property (copy, nonatomic) NSString *faceProgressStartColor;
@property (copy, nonatomic) NSString *faceProgressEndColor;
@property (copy, nonatomic) NSString *circleTxtColor;
@property (copy, nonatomic) NSString *exitIconPath;
@property (copy, nonatomic) NSString *exitIconBase64;
@property (copy, nonatomic) NSString *submitTextColor;
@property (copy, nonatomic) NSString *submitLoadingIconBase64;
@property (copy, nonatomic) NSString *submitLoadingIconPath;
@property (copy, nonatomic) NSString *dialogExitTitleColor;
@property (copy, nonatomic) NSString *dialogExitMsgColor;
@property (copy, nonatomic) NSString *dialogExitCancelColor;
@property (copy, nonatomic) NSString *dialogExitConfirmColor;
@property (copy, nonatomic) NSString *dialogTimeOutTitleColor;
@property (copy, nonatomic) NSString *dialogTimeOutMsgColor;
@property (copy, nonatomic) NSString *dialogTimeOutConfirmColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedTitleColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedMsgColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedConfirmColor;
@property (copy, nonatomic) NSString *dialogArchSysFailedTitleColor;
@property (copy, nonatomic) NSString *dialogArchSysFailedMsgColor;
@property (copy, nonatomic) NSString *dialogArchSysFailedConfirmColor;
@property (copy, nonatomic) NSString *dialogTooManyRetriesTitleColor;
@property (copy, nonatomic) NSString *dialogTooManyRetriesMsgColor;
@property (copy, nonatomic) NSString *dialogTooManyRetriesConfirmColor;
@property (copy, nonatomic) NSString *dialogInterruptTitleColor;
@property (copy, nonatomic) NSString *dialogInterruptMsgColor;
@property (copy, nonatomic) NSString *dialogInterruptConfirmColor;
@property (copy, nonatomic) NSString *dialogInterruptCancelColor;
@property (copy, nonatomic) NSString *dialogSDKErrTitleColor;
@property (copy, nonatomic) NSString *dialogSDKErrMsgColor;
@property (copy, nonatomic) NSString *dialogSDKErrConfirmColor;
@property (copy, nonatomic) NSString *dialogCamOpenFailedTitleColor;
@property (copy, nonatomic) NSString *dialogCamOpenFailedMsgColor;
@property (copy, nonatomic) NSString *dialogCamOpenFailedConfirmColor;
@property (copy, nonatomic) NSString *dialogCamOpenFailedCancelColor;
@property (copy, nonatomic) NSString *noticeIconPath;
@property (copy, nonatomic) NSString *noticeIconBase64;
@property (copy, nonatomic) NSString *noticeTxtColor;
@property (copy, nonatomic) NSString *noticeBgColor;
@property (copy, nonatomic) NSString *settingFailReason;
@property (copy, nonatomic) NSString *dialogConfirmBgColor;
@property (copy, nonatomic) NSString *dialogCancelBgColor;

- (void)setDefaultConfig;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

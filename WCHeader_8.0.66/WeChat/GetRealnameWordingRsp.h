@class SpecialFindPwdInfo, NSString, JumpRemind, NSMutableArray, BaseResponse;

@interface GetRealnameWordingRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *bindCardTitle;
@property (retain, nonatomic) NSString *bindCardSubTitle;
@property (retain, nonatomic) NSString *bindIdTitle;
@property (retain, nonatomic) NSString *bindIdSubTitle;
@property (retain, nonatomic) NSString *extralWording;
@property (nonatomic) BOOL questionAnswerSwitch;
@property (retain, nonatomic) NSString *questionAnswerUrl;
@property (nonatomic) int cacheTime;
@property (nonatomic) BOOL isShowBindCard;
@property (nonatomic) BOOL isShowBindId;
@property (nonatomic) BOOL isShowBindCardVerify;
@property (retain, nonatomic) NSString *bindCardVerifyTitle;
@property (retain, nonatomic) NSString *bindCardVerifySubtitle;
@property (retain, nonatomic) NSString *bindCardVerifyAlertViewRightButtonText;
@property (retain, nonatomic) NSString *bindCardVerifyAlertViewContent;
@property (nonatomic) BOOL isShowBindCardVerifyAlertView;
@property (retain, nonatomic) NSMutableArray *headerTitles;
@property (nonatomic) BOOL needAgreeDuty;
@property (retain, nonatomic) JumpRemind *jumpRemindInfo;
@property (nonatomic) BOOL isShowCapitalSecurity;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *capitalSecurityWording;
@property (nonatomic) BOOL isnewrouter;
@property (nonatomic) BOOL isShowBindcardPage;
@property (retain, nonatomic) NSMutableArray *session;
@property (retain, nonatomic) NSString *realnameWordTitle;
@property (retain, nonatomic) NSString *realnameWordDesc;
@property (nonatomic) BOOL isVerifySmsWithoutBandCard;
@property (retain, nonatomic) SpecialFindPwdInfo *specialFindPwdInfo;

+ (void)initialize;

@end

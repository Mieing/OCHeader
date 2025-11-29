@class NSData, NSString, NSArray, UIImage, MobileInfo, NSMutableDictionary, NSDictionary, NSMutableArray, UnifyAuthResponse, LoginUserInfo;

@interface WCAccountControlData : NSObject

@property (nonatomic) unsigned int m_uiLoginType;
@property (nonatomic) unsigned int m_uiFromScene;
@property (retain, nonatomic) NSString *m_nsPwd;
@property (retain, nonatomic) NSString *m_nsPwdMD5;
@property (retain, nonatomic) NSString *m_nsPwd16MD5;
@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsLastLoginName;
@property (retain, nonatomic) NSString *m_nsContryCode;
@property (retain, nonatomic) NSString *m_nsContryISOCode;
@property (retain, nonatomic) NSString *m_nsPhoneNumber;
@property (retain, nonatomic) NSString *m_nsFormatedPhoneNumber;
@property (retain, nonatomic) NSString *m_nsTicket;
@property (nonatomic) int m_iRegisterControlFlag;
@property (retain, nonatomic) UnifyAuthResponse *m_structAuthResponse;
@property (retain, nonatomic) NSArray *m_arrNextStep;
@property (retain, nonatomic) UIImage *m_headImage;
@property (retain, nonatomic) NSData *m_dtVerifyImg;
@property (retain, nonatomic) NSString *m_nsAlias;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (retain, nonatomic) NSString *m_nsVerifySignature;
@property (retain, nonatomic) NSString *m_nsVerifyCode;
@property (nonatomic) int m_iInputType;
@property (nonatomic) int m_iForceReg;
@property (nonatomic) int m_iRegMode;
@property (nonatomic) unsigned int m_uiRegNextShowStyle;
@property (retain, nonatomic) NSDictionary *m_dicStyleKeyValue;
@property (retain, nonatomic) NSString *m_nsRandomID;
@property (nonatomic) BOOL m_bAdjustRet;
@property (nonatomic) unsigned int m_uiAdjustRet;
@property (retain, nonatomic) NSString *m_regSessionId;
@property (retain, nonatomic) NSString *m_thirdAppAuthTicket;
@property (retain, nonatomic) NSString *m_appleIdTicket;
@property (retain, nonatomic) NSString *m_simMobileMsgID;
@property (retain, nonatomic) NSString *m_extSpamCtxString;
@property (retain, nonatomic) MobileInfo *maskedMobileInfo;
@property (retain, nonatomic) NSMutableArray *m_arrUserInfos;
@property (retain, nonatomic) LoginUserInfo *m_userInfo;
@property (retain, nonatomic) NSString *smsUpCode;
@property (retain, nonatomic) NSString *smsUpMobile;
@property (nonatomic) unsigned int mobileCheckType;
@property (nonatomic) BOOL needDoPostCheck;
@property (retain, nonatomic) NSMutableDictionary *m_dicVCParam;
@property (nonatomic) BOOL affRegAccountKeepOldLogic;
@property (nonatomic) BOOL affRegAccountWithFinder;
@property (retain, nonatomic) NSString *kidsWatchURL;
@property (retain, nonatomic) NSArray *kidsAccountInfoList;
@property (retain, nonatomic) NSString *kidsAccountOpenID;
@property (nonatomic) BOOL kidsWatchShowSyncChat;
@property (nonatomic) BOOL isPasskeyLoginAutoShow;

- (id)init;
- (BOOL)isFromReg;
- (BOOL)isFromLogin;
- (BOOL)isFromForgetPwd;
- (BOOL)isDialCodeCheckType;
- (BOOL)hasPhoneNumber;
- (void).cxx_destruct;

@end

@class NSString, AuthorizeUserIDAlarm, BaseResponse, AuthorizeInfoWithPhone, AuthorizeUserIDBaseResponse, AuthorizeUserIDJumpItem, VerifyWxPayReq, NSMutableArray;

@interface ShowAuthorizeUserIDResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse;
@property (nonatomic) unsigned int showStatus;
@property (retain, nonatomic) AuthorizeUserIDAlarm *alarmBox;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *authWording;
@property (retain, nonatomic) NSMutableArray *userIdList;
@property (retain, nonatomic) NSString *businessWording;
@property (retain, nonatomic) NSString *confirmWording;
@property (retain, nonatomic) AuthorizeUserIDJumpItem *protocolJump;
@property (retain, nonatomic) NSMutableArray *jumpList;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) VerifyWxPayReq *verifyPayReq;
@property (nonatomic) BOOL authChecked;
@property (retain, nonatomic) NSString *protocolPrefix;
@property (retain, nonatomic) NSMutableArray *newUserIdList;
@property (retain, nonatomic) AuthorizeInfoWithPhone *authorizeInfo;

+ (void)initialize;

@end

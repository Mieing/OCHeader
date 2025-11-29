@class NSString, AuthorizeInfoWithPhone, UserIdAuthorizePageJumpItem, VerifyWxPayReqInfo, NSMutableArray;

@interface UserIdAuthorizePageInfo : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *authWording;
@property (retain, nonatomic) NSMutableArray *userIdList;
@property (copy, nonatomic) NSString *businessWording;
@property (copy, nonatomic) NSString *confirmWording;
@property (retain, nonatomic) UserIdAuthorizePageJumpItem *protocolJump;
@property (retain, nonatomic) NSMutableArray *jumpItemList;
@property (copy, nonatomic) NSString *ticket;
@property (retain, nonatomic) VerifyWxPayReqInfo *verifyPayReq;
@property (nonatomic) BOOL authChecked;
@property (copy, nonatomic) NSString *protocolPrefix;
@property (retain, nonatomic) NSMutableArray *userIdListNew;
@property (retain, nonatomic) AuthorizeInfoWithPhone *authorizeInfo;
@property (nonatomic) BOOL showPrivacyInfo;

- (void).cxx_destruct;

@end

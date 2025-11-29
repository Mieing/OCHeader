@class NSString, XPlayBusinessUserInfo;

@interface XPlayUserSession : NSObject <XPlayUserInfoProtocol>

@property (retain, nonatomic) XPlayBusinessUserInfo *userInfo;
@property (nonatomic) BOOL isActivateToday;
@property (nonatomic) BOOL isVip;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) BOOL isUserLogin;
@property (nonatomic) BOOL isRealnameAuth;
@property (nonatomic) BOOL isBanned;
@property (nonatomic) int points;
@property (nonatomic) int passment;
@property (nonatomic) int activeDays;
@property (nonatomic) long long vipIncrement;
@property (nonatomic) long long nonVipIncrement;
@property (nonatomic) long long vipInspireAdInscrement;
@property (nonatomic) long long nonVipInspireAdInscrement;
@property (nonatomic) long long remainTrialTime;
@property (nonatomic) int levelValue;
@property (nonatomic) BOOL isTimeUnlimited;
@property (nonatomic) long long activateTime;
@property (nonatomic) BOOL notConsumeTrialTime;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) BOOL isTempUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)arrangeWithDic:(id)a0;
- (void)updateUserInfoWithProtocol:(id)a0;
- (void)updateUserInfoWithDic:(id)a0;
- (id)copyInfo;
- (void).cxx_destruct;
- (BOOL)isAuthorized;
- (id)init;
- (void)clearSession;

@end

@class NSString;

@interface XPlayBusinessUserInfo : NSObject <XPlayUserInfoProtocol>

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

+ (id)userInfoWithDic:(id)a0;

- (void)arrangeWithDic:(id)a0;
- (void)arrageWithProtocol:(id)a0;
- (void)updateWithDic:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAuthorized;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

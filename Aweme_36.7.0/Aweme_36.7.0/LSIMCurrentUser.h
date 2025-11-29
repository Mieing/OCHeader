@class BDECPigeonUserInfoModel, BDECPigeonParticipant, NSString, NSDictionary;

@interface LSIMCurrentUser : NSObject <LSIMMember>

@property (nonatomic) BOOL isCSLogin;
@property (nonatomic) BOOL isKOLLogin;
@property (nonatomic) BOOL hasLoginStatus;
@property (retain, nonatomic) BDECPigeonUserInfoModel *CSUser;
@property (retain, nonatomic) BDECPigeonParticipant *KOLUser;
@property (nonatomic) long long bizType;
@property (readonly, nonatomic) BOOL isLogin;
@property (readonly, nonatomic) long long memberRoleType;
@property (readonly, nonatomic) long long memberBizRole;
@property (readonly, copy, nonatomic) NSString *memberBizRoleString;
@property (readonly, copy, nonatomic) NSString *pigeonUid;
@property (readonly, copy, nonatomic) NSString *pigeonShopId;
@property (readonly, copy, nonatomic) NSString *senderAvatar;
@property (readonly, copy, nonatomic) NSString *senderName;
@property (readonly, nonatomic) BOOL isUserSelf;
@property (readonly, copy, nonatomic) NSDictionary *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsLogin:(BOOL)a0;
- (void)clearUser;
- (BOOL)isCSUser;
- (BOOL)isKOLUser;
- (BOOL)userAvailable;
- (void)updatePigeonUid:(id)a0 bizType:(long long)a1;
- (void).cxx_destruct;

@end

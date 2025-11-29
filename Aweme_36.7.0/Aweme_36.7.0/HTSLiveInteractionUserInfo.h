@class NSString, HTSLiveAdminUser, HTSLiveUser;

@interface HTSLiveInteractionUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) HTSLiveAdminUser *adminUserInfo;
@property (nonatomic) BOOL hasAdminUserInfo;

+ (id)descriptor;

@end

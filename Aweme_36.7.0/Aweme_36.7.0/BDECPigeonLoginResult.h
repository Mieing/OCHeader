@class NSString, BDECPigeonLoginLinkInfoResult, BDECPigeonLoginUserInfoResult, BDECPigeonIMPermissionInfoModel;

@interface BDECPigeonLoginResult : NSObject

@property (retain) BDECPigeonLoginLinkInfoResult *linkInfoResult;
@property (retain) BDECPigeonLoginUserInfoResult *userInfoResult;
@property (retain) BDECPigeonIMPermissionInfoModel *permissionInfoModel;
@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *errMsg;
@property (readonly, nonatomic) unsigned long long permissionStatus;
@property (readonly, copy, nonatomic) NSString *accountID;

- (void).cxx_destruct;

@end

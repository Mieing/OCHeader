@class NSString, BDECPigeonLoginStaffModel, BDECPigeonUserInfoPatchModel;

@interface BDECPigeonLoginUserInfoResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *errMsg;
@property (readonly, nonatomic) BDECPigeonLoginStaffModel *staffModel;
@property (readonly, nonatomic) BDECPigeonUserInfoPatchModel *cacheUserInfo;
@property (readonly, nonatomic) BDECPigeonUserInfoPatchModel *userInfoModel;

- (id)initWithSuccess:(BOOL)a0 errMsg:(id)a1 cacheUserInfo:(id)a2 userInfoModel:(id)a3;
- (id)initWithSuccess:(BOOL)a0 errMsg:(id)a1 staffModel:(id)a2;
- (void).cxx_destruct;

@end

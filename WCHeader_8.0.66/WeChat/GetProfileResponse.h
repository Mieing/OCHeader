@class ModUserInfo, UserInfoExt, BaseResponse;

@interface GetProfileResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ModUserInfo *userInfo;
@property (retain, nonatomic) UserInfoExt *userInfoExt;

+ (void)initialize;

- (void)setUserInfoExt:(id)a0;
- (id)userInfoExt;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end

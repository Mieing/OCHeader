@class AnnieGetUserInfoUserInfoModel;

@interface AnnieGetUserInfoResultModel : IESLiveBridgeModel

@property (nonatomic) BOOL isLogin;
@property (retain, nonatomic) AnnieGetUserInfoUserInfoModel *userInfo;

- (void).cxx_destruct;

@end

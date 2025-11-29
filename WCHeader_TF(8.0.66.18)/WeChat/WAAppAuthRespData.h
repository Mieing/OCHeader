@class NSArray, WxaUseUserInfo;

@interface WAAppAuthRespData : MMObject

@property (retain, nonatomic) NSArray *authInfoList;
@property (retain, nonatomic) WxaUseUserInfo *useUserInfo;

- (void).cxx_destruct;

@end

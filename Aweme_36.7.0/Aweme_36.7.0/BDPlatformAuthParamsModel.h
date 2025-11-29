@class NSDictionary, BDPlatformSDKGetAuthReq, BDPlatformSDKNetApi;

@interface BDPlatformAuthParamsModel : NSObject

@property (copy, nonatomic) id /* block */ authCompletionBlock;
@property (copy, nonatomic) NSDictionary *loginExtraInfo;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) BDPlatformSDKGetAuthReq *req;
@property (retain, nonatomic) BDPlatformSDKNetApi *netApi;

- (void).cxx_destruct;

@end

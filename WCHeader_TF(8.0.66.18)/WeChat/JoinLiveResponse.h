@class NSData, LiveSdkInfo, BaseResponse;

@interface JoinLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;

+ (void)initialize;

@end

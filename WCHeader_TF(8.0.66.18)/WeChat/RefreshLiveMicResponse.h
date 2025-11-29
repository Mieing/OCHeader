@class LiveSdkInfo, BaseResponse;

@interface RefreshLiveMicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;

+ (void)initialize;

@end

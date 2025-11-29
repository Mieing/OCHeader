@class MidasSdkInfo, BaseResponse;

@interface GetMidasSdkInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MidasSdkInfo *sdkInfo;

+ (void)initialize;

@end

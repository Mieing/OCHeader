@class GetFunctionStatusResponse_ShowCenterFunctionStatus;

@interface GetFunctionStatusResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GetFunctionStatusResponse_ShowCenterFunctionStatus *showCenterStatus;
@property (nonatomic) BOOL hasShowCenterStatus;

+ (id)descriptor;

@end

@class BaseResponse, MMIotNavigateInfo, SSVMiniAppRedirectInfo, MMIotWordingInfo;

@interface MMIotTransferMsgToDeviceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL navigateToMiniprogram;
@property (retain, nonatomic) MMIotNavigateInfo *navigateInfo;
@property (retain, nonatomic) MMIotWordingInfo *wordingInfo;
@property (retain, nonatomic) SSVMiniAppRedirectInfo *ssvRedirectInfo;

+ (void)initialize;

@end

@class NSData, TransferAction, BaseResponse;

@interface WxaRuntimeLoginTransferResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *respData;
@property (retain, nonatomic) TransferAction *transferAction;

+ (void)initialize;

@end

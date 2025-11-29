@class NSData, QyBaseResponse, BaseResponse;

@interface BizTransferResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *cmdData;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;

+ (void)initialize;

@end

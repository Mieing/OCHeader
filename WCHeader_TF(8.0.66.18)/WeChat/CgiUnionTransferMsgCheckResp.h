@class NSString, BaseResponse;

@interface CgiUnionTransferMsgCheckResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *forceMsgInfo;

+ (void)initialize;

@end

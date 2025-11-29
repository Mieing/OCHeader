@class TransferAction_AlertMsgInfo, TransferAction_OpenAppInfo, TransferAction_OpenUrlInfo;

@interface TransferAction : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) TransferAction_OpenAppInfo *openAppInfo;
@property (retain, nonatomic) TransferAction_OpenUrlInfo *openUrlInfo;
@property (retain, nonatomic) TransferAction_AlertMsgInfo *alertMsgInfo;

+ (void)initialize;

@end

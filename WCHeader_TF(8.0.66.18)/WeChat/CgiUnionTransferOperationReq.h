@class BaseRequest, NSString;

@interface CgiUnionTransferOperationReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferId;
@property (retain, nonatomic) NSString *cftTradeId;
@property (retain, nonatomic) NSString *roomid;
@property (nonatomic) unsigned int op;
@property (retain, nonatomic) NSString *leftButtonContinue;
@property (retain, nonatomic) NSString *againCtx;

+ (void)initialize;

@end

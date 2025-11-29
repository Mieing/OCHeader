@class NSString, UninonTransferMsgCheckInfo, InterceptWin, BaseResponse;

@interface CgiUnionTransferPlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) InterceptWin *interceptWin;
@property (retain, nonatomic) NSString *appmsgcontent;
@property (retain, nonatomic) NSString *transferId;
@property (retain, nonatomic) NSString *doubleCheckWording;
@property (retain, nonatomic) NSString *prepayId;
@property (nonatomic) unsigned int returnToSession;
@property (retain, nonatomic) UninonTransferMsgCheckInfo *msgCheckInfo;

+ (void)initialize;

@end

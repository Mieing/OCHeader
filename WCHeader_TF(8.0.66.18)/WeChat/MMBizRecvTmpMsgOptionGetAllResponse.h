@class NSMutableArray, BaseResponse;

@interface MMBizRecvTmpMsgOptionGetAllResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recvTmpMsgOpt;

+ (void)initialize;

@end

@class NSString, NSMutableArray, BaseResponse;

@interface TransferPhoneGetHisRcvrsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSMutableArray *rcvrs;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSString *lastId;

+ (void)initialize;

@end

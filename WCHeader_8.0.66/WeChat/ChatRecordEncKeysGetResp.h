@class NSMutableArray, BaseResponse;

@interface ChatRecordEncKeysGetResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *encs;

+ (void)initialize;

@end

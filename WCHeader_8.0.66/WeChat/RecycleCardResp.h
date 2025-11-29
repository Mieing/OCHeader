@class NSMutableArray, BaseResponse;

@interface RecycleCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned long long nextReqTime;
@property (nonatomic) unsigned int maxMsgCount;

+ (void)initialize;

@end

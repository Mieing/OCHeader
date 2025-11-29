@class NSMutableArray, BaseResponse;

@interface BizFeedbackResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int maxMsgCount;

+ (void)initialize;

@end

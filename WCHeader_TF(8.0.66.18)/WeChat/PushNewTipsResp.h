@class BaseResponse;

@interface PushNewTipsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isReject;

+ (void)initialize;

@end

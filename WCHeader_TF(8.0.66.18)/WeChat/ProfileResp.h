@class NSMutableArray, BaseResponse;

@interface ProfileResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *outbox;

+ (void)initialize;

@end

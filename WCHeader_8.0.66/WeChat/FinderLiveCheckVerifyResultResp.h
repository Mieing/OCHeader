@class BaseResponse;

@interface FinderLiveCheckVerifyResultResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isPassed;

+ (void)initialize;

@end

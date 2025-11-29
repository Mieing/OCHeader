@class BaseResponse;

@interface GetWeRunUserStateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL hasStep;

+ (void)initialize;

@end

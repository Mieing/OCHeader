@class TransResult, BaseResponse;

@interface FinderBgmGetLyricResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TransResult *transResult;

+ (void)initialize;

@end

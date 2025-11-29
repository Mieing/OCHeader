@class BaseResponse;

@interface FinderLiveEntranceVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL valid;

+ (void)initialize;

@end

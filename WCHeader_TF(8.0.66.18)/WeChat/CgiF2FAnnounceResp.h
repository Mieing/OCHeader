@class NSMutableArray, BaseResponse;

@interface CgiF2FAnnounceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *accounceItems;

+ (void)initialize;

@end

@class NSData, BaseResponse;

@interface WeAppOpSearchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *templateBuffer;

+ (void)initialize;

@end

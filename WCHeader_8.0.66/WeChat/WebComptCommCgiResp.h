@class NSString, BaseResponse;

@interface WebComptCommCgiResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *respStr;

+ (void)initialize;

@end

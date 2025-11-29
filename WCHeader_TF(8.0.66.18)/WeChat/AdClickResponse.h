@class NSString, BaseResponse;

@interface AdClickResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end

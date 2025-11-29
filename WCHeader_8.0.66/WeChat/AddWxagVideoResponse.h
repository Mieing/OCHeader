@class NSString, BaseResponse;

@interface AddWxagVideoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsonData;
@property (retain, nonatomic) NSString *shareUrl;

+ (void)initialize;

@end

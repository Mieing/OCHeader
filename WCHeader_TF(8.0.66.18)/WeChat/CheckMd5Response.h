@class NSString, BaseResponse;

@interface CheckMd5Response : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *aeskey;

+ (void)initialize;

@end

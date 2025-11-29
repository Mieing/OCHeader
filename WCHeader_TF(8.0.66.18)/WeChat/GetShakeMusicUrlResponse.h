@class NSString, BaseResponse;

@interface GetShakeMusicUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *songUrl;

+ (void)initialize;

@end

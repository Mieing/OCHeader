@class BaseRequest, NSString;

@interface GetShakeMusicUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *songUrl;

+ (void)initialize;

@end

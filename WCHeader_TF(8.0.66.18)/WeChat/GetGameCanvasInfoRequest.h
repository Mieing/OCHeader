@class BaseRequest, NSString;

@interface GetGameCanvasInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *shareType;
@property (retain, nonatomic) NSString *userInfo;

+ (void)initialize;

@end

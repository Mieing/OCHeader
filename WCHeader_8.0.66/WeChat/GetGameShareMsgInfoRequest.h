@class BaseRequest, NSString;

@interface GetGameShareMsgInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *gameShareData;

+ (void)initialize;

@end

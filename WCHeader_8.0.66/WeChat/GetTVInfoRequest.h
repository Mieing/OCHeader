@class BaseRequest, NSString;

@interface GetTVInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *tvid;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

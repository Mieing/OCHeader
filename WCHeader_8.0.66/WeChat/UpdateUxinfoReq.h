@class BaseRequest, NSString;

@interface UpdateUxinfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *origUxinfo;
@property (nonatomic) unsigned int enterScene;

+ (void)initialize;

@end

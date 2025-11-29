@class BaseRequest, NSString;

@interface ModUserAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *optScope;
@property (nonatomic) unsigned int optState;
@property (nonatomic) unsigned int allscopeOptFlag;
@property (nonatomic) unsigned int allscopeState;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end

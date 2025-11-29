@class BaseRequest, NSString;

@interface GetCommentInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int commentScene;
@property (nonatomic) unsigned int bizuin;

+ (void)initialize;

@end

@class BaseRequest, NSMutableArray, NSString;

@interface GetHtmlTransTextRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) NSString *fromLang;
@property (retain, nonatomic) NSString *toLang;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end

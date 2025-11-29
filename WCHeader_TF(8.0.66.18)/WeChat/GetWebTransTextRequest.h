@class BaseRequest, NSMutableArray, NSString;

@interface GetWebTransTextRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSMutableArray *sources;
@property (retain, nonatomic) NSString *fromlang;
@property (retain, nonatomic) NSString *tolang;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end

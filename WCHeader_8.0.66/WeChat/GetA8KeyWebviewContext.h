@class NSString;

@interface GetA8KeyWebviewContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int requestId;
@property (nonatomic) unsigned int contentType;
@property (nonatomic) unsigned int appmsgInnerType;
@property (retain, nonatomic) NSString *msgid;
@property (retain, nonatomic) NSString *msgUsername;
@property (retain, nonatomic) NSString *fromUsername;

+ (void)initialize;

@end

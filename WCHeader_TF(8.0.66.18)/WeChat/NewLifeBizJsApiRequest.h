@class NSString, NSMutableArray;

@interface NewLifeBizJsApiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cgiUri;
@property (retain, nonatomic) NSString *reqJson;
@property (nonatomic) unsigned int cgiCmdId;
@property (retain, nonatomic) NSMutableArray *reqHeader;
@property (nonatomic) unsigned int method;

+ (void)initialize;

@end

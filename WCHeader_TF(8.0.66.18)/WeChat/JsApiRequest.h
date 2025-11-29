@class NSString, NSMutableArray;

@interface JsApiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *reqJson;
@property (nonatomic) unsigned int cgiCmdid;
@property (retain, nonatomic) NSMutableArray *header;
@property (nonatomic) unsigned int method;

+ (void)initialize;

@end

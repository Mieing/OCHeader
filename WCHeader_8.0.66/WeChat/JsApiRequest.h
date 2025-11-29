@class NSString, NSMutableArray;

@interface JsApiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *reqJson;
@property (nonatomic) unsigned int cgiCmdid;
@property (retain, nonatomic) NSMutableArray *header;
@property (nonatomic) unsigned int method;

+ (void)initialize;

- (void)setMethod:(unsigned int)a0;
- (unsigned int)method;
- (void)setHeader:(id)a0;
- (id)header;
- (void)setCgiCmdid:(unsigned int)a0;
- (unsigned int)cgiCmdid;
- (void)setReqJson:(id)a0;
- (id)reqJson;
- (void)setUrl:(id)a0;
- (id)url;

@end

@class NSString, LiteAppConf;

@interface UrlLiteConf : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasLiteConf;
@property (retain, nonatomic) LiteAppConf *liteAppConf;

+ (void)initialize;

@end

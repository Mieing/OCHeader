@class NSString, TinyAppUri, LiteAppOpenInfo;

@interface ThirdC2CRouteInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) TinyAppUri *tinyAppUri;
@property (retain, nonatomic) LiteAppOpenInfo *liteAppOpenInfo;

+ (void)initialize;

@end

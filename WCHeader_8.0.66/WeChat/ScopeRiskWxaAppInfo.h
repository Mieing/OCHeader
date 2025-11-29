@class NSString;

@interface ScopeRiskWxaAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end

@class NSString;

@interface EcsActionClientInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int sessionType;
@property (retain, nonatomic) NSString *sessionLang;
@property (nonatomic) unsigned int testEvn;

+ (void)initialize;

@end

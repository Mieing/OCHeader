@class NSString;

@interface GetAppConfigItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int configVersion;
@property (nonatomic) unsigned int newXmlCommand;

+ (void)initialize;

@end

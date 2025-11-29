@class NSString;

@interface WxaGameLiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int wxaGameVersion;
@property (retain, nonatomic) NSString *wxaDeveloperCustomParam;
@property (retain, nonatomic) NSString *reportInfo;

+ (void)initialize;

@end

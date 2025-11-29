@class WxaSyncBaseCmd;

@interface WxaSyncUpdateVersionCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (nonatomic) unsigned int lastVersion;
@property (nonatomic) unsigned int launchFallbackDirectlyMinVersion;

+ (void)initialize;

@end

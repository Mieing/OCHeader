@class NSString, WxaSyncCmds;

@interface SyncVersionSingleRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) WxaSyncCmds *cmds;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appServiceType;

+ (void)initialize;

@end

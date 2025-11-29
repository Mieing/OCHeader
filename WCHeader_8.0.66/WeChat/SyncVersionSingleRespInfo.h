@class NSString, WxaSyncCmds;

@interface SyncVersionSingleRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) WxaSyncCmds *cmds;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appServiceType;

+ (void)initialize;

- (void)setAppServiceType:(unsigned int)a0;
- (unsigned int)appServiceType;
- (void)setAppid:(id)a0;
- (id)appid;
- (void)setCmds:(id)a0;
- (id)cmds;
- (void)setWxaUserName:(id)a0;
- (id)wxaUserName;

@end

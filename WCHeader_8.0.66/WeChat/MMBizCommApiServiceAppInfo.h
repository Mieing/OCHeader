@class NSString;

@interface MMBizCommApiServiceAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appNameEn;
@property (retain, nonatomic) NSString *appNameTw;
@property (retain, nonatomic) NSString *appIconUrlPanel;
@property (retain, nonatomic) NSString *appIconUrlList;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int appInfoFlag;
@property (retain, nonatomic) NSString *appForwardUrl;
@property (nonatomic) unsigned int appJumpType;
@property (nonatomic) unsigned int appShowFlag;
@property (retain, nonatomic) NSString *appShowLang;
@property (retain, nonatomic) NSString *appNameHk;
@property (nonatomic) unsigned int appUin;
@property (nonatomic) unsigned int appDisable;
@property (nonatomic) unsigned int groupId;
@property (retain, nonatomic) NSString *regCountryList;
@property (retain, nonatomic) NSString *appIconUrlPanelOld;
@property (retain, nonatomic) NSString *appIconUrlPanelNew;
@property (retain, nonatomic) NSString *prefixCondition;

+ (void)initialize;

- (void)setPrefixCondition:(id)a0;
- (id)prefixCondition;
- (void)setAppIconUrlPanelNew:(id)a0;
- (id)appIconUrlPanelNew;
- (void)setAppIconUrlPanelOld:(id)a0;
- (id)appIconUrlPanelOld;
- (void)setRegCountryList:(id)a0;
- (id)regCountryList;
- (void)setGroupId:(unsigned int)a0;
- (unsigned int)groupId;
- (void)setAppDisable:(unsigned int)a0;
- (unsigned int)appDisable;
- (void)setAppUin:(unsigned int)a0;
- (unsigned int)appUin;
- (void)setAppNameHk:(id)a0;
- (id)appNameHk;
- (void)setAppShowLang:(id)a0;
- (id)appShowLang;
- (void)setAppShowFlag:(unsigned int)a0;
- (unsigned int)appShowFlag;
- (void)setAppJumpType:(unsigned int)a0;
- (unsigned int)appJumpType;
- (void)setAppForwardUrl:(id)a0;
- (id)appForwardUrl;
- (void)setAppInfoFlag:(unsigned int)a0;
- (unsigned int)appInfoFlag;
- (void)setAppType:(unsigned int)a0;
- (unsigned int)appType;
- (void)setAppName:(id)a0;
- (id)appName;
- (void)setAppIconUrlList:(id)a0;
- (id)appIconUrlList;
- (void)setAppIconUrlPanel:(id)a0;
- (id)appIconUrlPanel;
- (void)setAppNameTw:(id)a0;
- (id)appNameTw;
- (void)setAppNameEn:(id)a0;
- (id)appNameEn;
- (void)setAppid:(id)a0;
- (id)appid;

@end

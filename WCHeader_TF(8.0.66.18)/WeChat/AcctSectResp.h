@class NSString, XAgreementDmSetting, XAgreementWordingSetting;

@interface AcctSectResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int bindUin;
@property (retain, nonatomic) NSString *bindEmail;
@property (retain, nonatomic) NSString *bindMobile;
@property (retain, nonatomic) NSString *alias;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int pluginFlag;
@property (nonatomic) unsigned int regType;
@property (retain, nonatomic) NSString *deviceInfoXml;
@property (nonatomic) unsigned int safeDevice;
@property (retain, nonatomic) NSString *officialUserName;
@property (retain, nonatomic) NSString *officialNickName;
@property (nonatomic) unsigned int pushMailStatus;
@property (retain, nonatomic) NSString *fsurl;
@property (retain, nonatomic) NSString *historyAliasList;
@property (nonatomic) unsigned int userXagreementId;
@property (retain, nonatomic) XAgreementWordingSetting *xagreementWordingSetting;
@property (retain, nonatomic) XAgreementDmSetting *xagreementDmSetting;

+ (void)initialize;

- (void)setXagreementDmSetting:(id)a0;
- (id)xagreementDmSetting;
- (void)setXagreementWordingSetting:(id)a0;
- (id)xagreementWordingSetting;
- (void)setUserXagreementId:(unsigned int)a0;
- (unsigned int)userXagreementId;
- (void)setHistoryAliasList:(id)a0;
- (id)historyAliasList;
- (void)setFsurl:(id)a0;
- (id)fsurl;
- (void)setPushMailStatus:(unsigned int)a0;
- (unsigned int)pushMailStatus;
- (void)setOfficialNickName:(id)a0;
- (id)officialNickName;
- (void)setOfficialUserName:(id)a0;
- (id)officialUserName;
- (void)setSafeDevice:(unsigned int)a0;
- (unsigned int)safeDevice;
- (void)setDeviceInfoXml:(id)a0;
- (id)deviceInfoXml;
- (void)setRegType:(unsigned int)a0;
- (unsigned int)regType;
- (void)setPluginFlag:(unsigned int)a0;
- (unsigned int)pluginFlag;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setAlias:(id)a0;
- (id)alias;
- (void)setBindMobile:(id)a0;
- (id)bindMobile;
- (void)setBindEmail:(id)a0;
- (id)bindEmail;
- (void)setBindUin:(unsigned int)a0;
- (unsigned int)bindUin;
- (void)setNickName:(id)a0;
- (id)nickName;
- (void)setUserName:(id)a0;
- (id)userName;

@end

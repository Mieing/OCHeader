@class NSString;

@interface CUsrInfo : NSObject

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsAliasName;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (nonatomic) unsigned int m_uiBindQQUin;
@property (retain, nonatomic) NSString *m_nsEmail;
@property (retain, nonatomic) NSString *m_nsMobile;
@property (nonatomic) unsigned int m_uiStatus;
@property (nonatomic) unsigned int m_uiSex;
@property (retain, nonatomic) NSString *m_nsCountry;
@property (retain, nonatomic) NSString *m_nsProvince;
@property (retain, nonatomic) NSString *m_nsCity;
@property (retain, nonatomic) NSString *m_nsSignature;
@property (retain, nonatomic) NSString *m_nsHDHeadImgMD5;
@property (nonatomic) unsigned int m_uiPluginInstallStatus;
@property (nonatomic) unsigned int m_uiFacebookFlag;
@property (retain, nonatomic) NSString *m_nsFacebookID;
@property (retain, nonatomic) NSString *m_nsFacebookName;
@property (retain, nonatomic) NSString *m_nsFacebookToken;
@property (nonatomic) unsigned int m_uiPluginSwitch;
@property (retain, nonatomic) NSString *m_nsGMailAccount;
@property (nonatomic) unsigned int m_uiGMailStatus;
@property (nonatomic) unsigned int m_uiGMailSwitch;

- (id)init;
- (id)keyPaths;
- (id)description;
- (void).cxx_destruct;

@end

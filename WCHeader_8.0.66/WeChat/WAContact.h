@class NSString, NSDictionary, CAppBrandInfo;

@interface WAContact : NSObject

@property (copy, nonatomic) NSString *m_nsUsrName;
@property (copy, nonatomic) NSString *m_nsAppId;
@property (copy, nonatomic) NSString *m_nsAliasName;
@property (copy, nonatomic) NSString *m_nsNickName;
@property (copy, nonatomic) NSString *m_nsFullPY;
@property (copy, nonatomic) NSString *m_nsBrandIconUrl;
@property (copy, nonatomic) NSString *m_nsHeadHDImgUrl;
@property (copy, nonatomic) NSString *m_nsHeadImgUrl;
@property (copy, nonatomic) NSString *m_nsSignature;
@property (nonatomic) unsigned int m_uiType;
@property (nonatomic) unsigned int m_uiWxAppOpt;
@property (retain, nonatomic) CAppBrandInfo *appBrandInfo;
@property (nonatomic) unsigned int m_uiDebugModeType;
@property (nonatomic) unsigned int uiLastUpdateAppVersionInfoTime;
@property (nonatomic) unsigned int uiLastLaunchAppTime;
@property (nonatomic) unsigned int m_uiCertificationFlag;
@property (copy, nonatomic) NSString *m_nsImgStatus;
@property (retain, nonatomic) NSString *m_nsExternalInfo;
@property (retain, nonatomic) NSDictionary *externalInfoJSONCache;
@property (nonatomic) BOOL m_isExtInfoValid;
@property (retain, nonatomic) NSString *debugModeChecksum;

+ (id)contactListWithWeAppContactList:(id)a0;
+ (BOOL)isWeAppUserName:(id)a0;
+ (BOOL)isWeAppAppId:(id)a0;

- (id)toCContact;
- (id)description;
- (BOOL)copyFieldFromContact:(id)a0;
- (BOOL)isAppBrandInfoValid;
- (id)getAppBrandInfo;
- (id)getAppID;
- (id)getContactHeadImgUrl;
- (id)getContactDisplayName;
- (id)getListDisplayName;
- (BOOL)isNormalWeApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isGameApp;
- (BOOL)isLiteGame;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)isWeAppContact;
- (BOOL)isContactValid;
- (id)getExternalInfoDictionary;
- (BOOL)hasSameOrNewerVersionThan:(unsigned long long)a0;
- (BOOL)isReleaseContact;
- (BOOL)isDebugContact;
- (BOOL)isRDMContact;
- (BOOL)isDebugModeTypeContact:(unsigned long long)a0;
- (id)getDicClientJSExtInfo;
- (id)getArrCallPluginInfo;
- (BOOL)hasReferencePluginAppid:(id)a0;
- (BOOL)isChatToolPath:(id)a0;
- (id)pluginDicForReferencePluginAppid:(id)a0;
- (id)allReferencePluginAppid;
- (unsigned int)innerVersionForPluginAppid:(id)a0;
- (void).cxx_destruct;

@end

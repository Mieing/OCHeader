@class NSString, WAAppPackageInfo, NSMutableDictionary, WAUpdatableMsgInfo;

@interface OpenSDKAppBrandItem : MMObject

@property (retain, nonatomic) NSString *appBrandUserName;
@property (retain, nonatomic) NSString *appBrandAppId;
@property (retain, nonatomic) NSString *appBrandPath;
@property (nonatomic) unsigned int appBrandVersion;
@property (retain, nonatomic) NSString *appBrandIconUrl;
@property (retain, nonatomic) NSString *shareKey;
@property (retain, nonatomic) NSString *shareId;
@property (retain, nonatomic) WAAppPackageInfo *packInfo;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) unsigned int brandOfficialFlag;
@property (nonatomic) unsigned int relievedBuyFlag;
@property (nonatomic) unsigned int flagshipFlag;
@property (nonatomic) unsigned int financialLicenseFlag;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;
@property (nonatomic) BOOL isPrivateMessage;
@property (retain, nonatomic) WAUpdatableMsgInfo *updatableMsgInfo;
@property (nonatomic) unsigned int secFlagForSinglePageMode;
@property (nonatomic) unsigned int pcSharedLaunchScene;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end

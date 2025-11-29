@class WAUpdatableMsgInfo, NSString, WADynamicPageInfo, NSMutableDictionary, WAScreenVideoInfo, WAVideoPageInfo, WANativeAppMsgInfo, WAAppPackageInfo;

@interface WAAppMsgItem : MMObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *pagepath;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *weappIconUrl;
@property (retain, nonatomic) NSString *shareId;
@property (retain, nonatomic) NSString *shareKey;
@property (retain, nonatomic) NSString *shareName;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned int brandOfficialFlag;
@property (nonatomic) unsigned int relievedBuyFlag;
@property (nonatomic) unsigned int hasRelievedBuyPlugin;
@property (nonatomic) unsigned int financialLicenseFlag;
@property (nonatomic) unsigned int flagshipFlag;
@property (nonatomic) long long tradeCommentScore;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) WAAppPackageInfo *packInfo;
@property (retain, nonatomic) WADynamicPageInfo *dynamicPageInfo;
@property (retain, nonatomic) WAUpdatableMsgInfo *updatableMsgInfo;
@property (retain, nonatomic) NSString *messageExtraData;
@property (retain, nonatomic) WANativeAppMsgInfo *nativeAppMsgInfo;
@property (retain, nonatomic) WAVideoPageInfo *videoPageInfo;
@property (retain, nonatomic) WAScreenVideoInfo *screenVideoInfo;
@property (copy, nonatomic) NSString *toDoActivityId;
@property (nonatomic) BOOL isPrivateMessage;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *favWeAppMsgId;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;
@property (retain, nonatomic) NSString *weAppPageThumbRawUrl;
@property (nonatomic) unsigned int secFlagForSinglePageMode;
@property (retain, nonatomic) NSString *agentSessionId;
@property (retain, nonatomic) NSString *pagepathForRoute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end

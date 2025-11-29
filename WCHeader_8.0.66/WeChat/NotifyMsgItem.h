@class NSString, NSArray;

@interface NotifyMsgItem : NSObject

@property (nonatomic) BOOL bExposed;
@property (nonatomic) BOOL bLiveEnd;
@property (nonatomic) BOOL bRejected;
@property (nonatomic) unsigned int nextRefreshTime;
@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSArray *displayList;
@property (retain, nonatomic) NSArray *extDisplayList;
@property (retain, nonatomic) NSString *tail;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *tipsID;
@property (retain, nonatomic) NSString *liveID;
@property (retain, nonatomic) NSString *nonceID;
@property (retain, nonatomic) NSString *noticeID;
@property (retain, nonatomic) NSString *byPassInfo;
@property (retain, nonatomic) NSString *revokeID;
@property (nonatomic) unsigned int ctrlType;
@property (nonatomic) unsigned int deliveryTime;
@property (nonatomic) unsigned long long controlFlag;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *reportExtInfo;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *pForcePushInfo;
@property (retain, nonatomic) NSString *previewTitle;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *liveAudiencePlayUrl;
@property (retain, nonatomic) NSString *liveDescription;
@property (nonatomic) BOOL isLiveAutoPlaying;
@property (retain, nonatomic) NSString *xml;
@property (retain, nonatomic) NSString *rejectWording;
@property (retain, nonatomic) NSString *recoverWording;
@property (retain, nonatomic) NSString *rejectStatusWording;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) BOOL useCustomNotifySetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genStatExtXml;
- (void)parseStateWithXmlReader:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)parseExtInfoWithXmlContent:(id)a0;
- (BOOL)updateExtInfoAttrKey:(id)a0 value:(id)a1 toXml:(id)a2;
- (void)parseExtInfoWithXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 content:(id)a1;
- (BOOL)disableReplace;
- (BOOL)disableBlackNoticeButton;
- (BOOL)disableComplaintEntry;
- (BOOL)forceShowLivePush;
- (BOOL)isSubscribe;
- (BOOL)shouldUseDynamicReason;
- (void).cxx_destruct;

@end

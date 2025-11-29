@class NSString, ThirdC2CRouteInfo;

@interface WCPayThirdInfo : NSObject

@property (nonatomic) int m_templateID;
@property (retain, nonatomic) NSString *m_iconUrl;
@property (retain, nonatomic) NSString *m_darkiconUrl;
@property (retain, nonatomic) NSString *m_miniIconUrl;
@property (retain, nonatomic) NSString *m_receiverTitle;
@property (retain, nonatomic) NSString *m_receiverDes;
@property (retain, nonatomic) NSString *m_senderTitle;
@property (retain, nonatomic) NSString *m_senderDes;
@property (nonatomic) int m_sceneID;
@property (copy, nonatomic) NSString *senderurl;
@property (copy, nonatomic) NSString *receiverurl;
@property (copy, nonatomic) NSString *sendernativeurl;
@property (copy, nonatomic) NSString *receivernativeurl;
@property (retain, nonatomic) NSString *titlecolor;
@property (retain, nonatomic) NSString *senderscenetext;
@property (retain, nonatomic) NSString *receiverscenetext;
@property (retain, nonatomic) NSString *scenetextcolor;
@property (retain, nonatomic) NSString *descolor;
@property (retain, nonatomic) NSString *paymsgid;
@property (retain, nonatomic) NSString *senderbackgroundurl;
@property (retain, nonatomic) NSString *receiverbackgroundurl;
@property (retain, nonatomic) NSString *senderbackgroundname;
@property (retain, nonatomic) NSString *receiverbackgroundname;
@property (retain, nonatomic) NSString *titlecolordark;
@property (retain, nonatomic) NSString *descolordark;
@property (retain, nonatomic) NSString *scenetextcolordark;
@property (retain, nonatomic) NSString *seperatorcolor;
@property (retain, nonatomic) NSString *seperatorcolordark;
@property (retain, nonatomic) NSString *senderbackgroundurldark;
@property (retain, nonatomic) NSString *receiverbackgroundurldark;
@property (retain, nonatomic) NSString *thirdc2crouteinfo;
@property (retain, nonatomic) ThirdC2CRouteInfo *routeInfo;
@property (retain, nonatomic) NSString *realtitlecolordark;
@property (retain, nonatomic) NSString *realdescolordark;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)getTextFrom:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 atNodeName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fromNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end

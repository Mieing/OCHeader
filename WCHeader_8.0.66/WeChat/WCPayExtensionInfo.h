@class NSString;

@interface WCPayExtensionInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *m_nsPayExtTemplateId;
@property (retain, nonatomic) NSString *m_nsOutTradeNo;
@property (nonatomic) unsigned int m_uiFee;
@property (retain, nonatomic) NSString *m_nsFeeType;
@property (retain, nonatomic) NSString *m_voiceContent;
@property (nonatomic) unsigned int m_expireTime;
@property (nonatomic) BOOL m_isNeedFailover;
@property (nonatomic) int m_businessType;

+ (id)getTextFrom:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 atNodeName:(id)a1;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)toXML;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

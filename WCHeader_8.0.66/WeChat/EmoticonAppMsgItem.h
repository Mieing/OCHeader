@class NSString;

@interface EmoticonAppMsgItem : MMObject <NSCopying>

@property (retain, nonatomic) NSString *m_nsMD5;
@property (nonatomic) double m_emoticonWidth;
@property (nonatomic) double m_emoticonHeight;
@property (nonatomic) unsigned int emojiType;
@property (nonatomic) unsigned int length;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (retain, nonatomic) NSString *m_nsCdnUrl;
@property (retain, nonatomic) NSString *m_nsExternUrl;
@property (retain, nonatomic) NSString *m_nsExternMd5;
@property (retain, nonatomic) NSString *m_nsProductId;
@property (retain, nonatomic) NSString *m_nsDesignerId;
@property (retain, nonatomic) NSString *m_nsAttachedText;
@property (retain, nonatomic) NSString *m_nsEncryptedUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end

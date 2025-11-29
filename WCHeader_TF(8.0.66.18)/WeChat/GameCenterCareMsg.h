@class NSString;

@interface GameCenterCareMsg : GameCenterOldBaseMsg

@property (retain, nonatomic) NSString *pictureUrl;

- (id)initWithXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)getMsgCenterContent;
- (void).cxx_destruct;

@end

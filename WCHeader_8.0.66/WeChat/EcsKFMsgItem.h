@class NSString;

@interface EcsKFMsgItem : MMObject

@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *mbCardData;
@property (nonatomic) unsigned int minUpdateUnixTimeStamp;
@property (nonatomic) BOOL needHeader;
@property (retain, nonatomic) NSString *summary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)description;
- (void).cxx_destruct;

@end

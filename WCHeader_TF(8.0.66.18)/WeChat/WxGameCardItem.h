@class NSString;

@interface WxGameCardItem : MMObject <NSCopying>

@property (retain, nonatomic) NSString *clientExtInfo;
@property (nonatomic) unsigned int msgtype;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *mbCardData;
@property (retain, nonatomic) NSString *minPkgVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canShowNotice;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void)parseClientExtInfo;
- (void).cxx_destruct;

@end

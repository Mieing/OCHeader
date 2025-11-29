@class NSString;

@interface WCFinderMessageVerifyItem : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *sceneNote;
@property (copy, nonatomic) NSString *scene;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)getTextFrom:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 atNodeName:(id)a1;
- (void).cxx_destruct;

@end

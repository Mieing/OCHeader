@interface ShareMsgObj : NSObject

@property (nonatomic) unsigned int createtime;
@property (nonatomic) long long svrid;
@property (nonatomic) long long newsvrid;

+ (id)genShareMsgObjWithMsgWrap:(id)a0;
+ (id)genShareMsgObjWithNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)genSourceContent;

@end

@interface FastStrUtil : NSObject

+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 string:(id)a2;
+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 integer:(unsigned int)a2;
+ (id)decodeToString:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 attribute:(const char *)a1;

@end

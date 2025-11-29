@interface CContactExtendCode : NSObject

+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 string:(id)a2;
+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 integer:(unsigned int)a2;
+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 PhoneList:(id)a2;
+ (id)decodeToPhoneList:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (BOOL)code:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 key:(const char *)a1 ChatRoomDetail:(id)a2;
+ (id)decodeToChatRoomDetail:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (id)decodeToString:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (unsigned long long)decodeToInteger64:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(const char *)a1;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 attribute:(const char *)a1;
+ (id)codeExtentField:(id)a0;
+ (BOOL)decodeExtentField:(id)a0 contact:(id)a1;
+ (BOOL)decodeKeyExtentField:(id)a0 contact:(id)a1;
+ (void)codeContactField:(struct CFastStr { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 contact:(id)a1;
+ (void)decodeContactField:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 contact:(id)a1;
+ (void)decodeKeyContactField:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 contact:(id)a1;
+ (void)decodeKeyContactFieldPurePB:(char *)a0 size:(unsigned int)a1 contact:(id)a2;

@end

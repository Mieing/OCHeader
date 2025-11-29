@class EcsJumpMiniAppInfo, EcsJumpHtml5Info, EcsJumpNativeInfo, EcsJumpLiteAppInfo;

@interface EcsGiftJumpInfo : MMObject <NSCopying>

@property (nonatomic) unsigned int jumpBizType;
@property (retain, nonatomic) EcsJumpMiniAppInfo *miniAppInfo;
@property (retain, nonatomic) EcsJumpLiteAppInfo *liteAppInfo;
@property (retain, nonatomic) EcsJumpHtml5Info *html5Info;
@property (retain, nonatomic) EcsJumpNativeInfo *nativeInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCADCanvasEggAnimationPagTheme : WCADCanvasEggAnimationElementInfo

@property (retain, nonatomic) NSString *simpleTransitionAnimationUrl;
@property (retain, nonatomic) NSString *simpleTransitionAnimationMD5;
@property (nonatomic) unsigned long long animationDuration;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)fromAdInfo:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isAnimationPagReady;
- (void).cxx_destruct;

@end

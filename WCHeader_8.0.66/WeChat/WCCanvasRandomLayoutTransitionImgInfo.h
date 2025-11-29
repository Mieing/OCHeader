@class NSString;

@interface WCCanvasRandomLayoutTransitionImgInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *transitionImgUrl;
@property (retain, nonatomic) NSString *transitionColor;
@property (nonatomic) double transitionColorAlpha;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

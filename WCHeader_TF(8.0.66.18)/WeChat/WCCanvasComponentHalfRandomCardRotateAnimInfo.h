@class NSString;

@interface WCCanvasComponentHalfRandomCardRotateAnimInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *animationImg;
@property (nonatomic) double imgWidth;
@property (nonatomic) double imgHeight;
@property (retain, nonatomic) NSString *animationColor;
@property (nonatomic) double animationColorAlpha;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

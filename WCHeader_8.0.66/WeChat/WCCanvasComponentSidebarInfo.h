@class NSString, NSArray;

@interface WCCanvasComponentSidebarInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *bgColor;
@property (nonatomic) double bgColorAlpha;
@property (retain, nonatomic) NSArray *layoutItems;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

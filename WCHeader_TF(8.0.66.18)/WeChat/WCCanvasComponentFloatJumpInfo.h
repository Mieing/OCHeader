@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentFloatJumpInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCCanvasComponentItem *jumpButton;
@property (nonatomic) BOOL autoJump;
@property (nonatomic) double swipeJumpOffset;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

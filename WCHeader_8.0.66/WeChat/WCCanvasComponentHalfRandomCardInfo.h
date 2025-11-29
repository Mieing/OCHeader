@class NSArray, NSString, WCCanvasComponentHalfRandomCardRotateAnimInfo, WCCanvasComponentHalfRandomCardPreAnimInfo;

@interface WCCanvasComponentHalfRandomCardInfo : MMObject <NSCoding>

@property (retain, nonatomic) WCCanvasComponentHalfRandomCardPreAnimInfo *preAnimInfo;
@property (retain, nonatomic) WCCanvasComponentHalfRandomCardRotateAnimInfo *rotateAnimInfo;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *backgroundImg;
@property (nonatomic) double backgroundImgWidth;
@property (nonatomic) double backgroundImgHeight;
@property (retain, nonatomic) NSString *bulletCommentsTitle;
@property (retain, nonatomic) NSArray *positiveBulletComments;
@property (retain, nonatomic) NSArray *negativeBulletComments;
@property (retain, nonatomic) NSString *theChosenRandomCardId;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

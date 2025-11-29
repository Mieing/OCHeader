@class NSString;

@interface WCCanvasRandomLayoutEncorePickInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *titleIconUrl;
@property (retain, nonatomic) NSString *titlePrefix;
@property (retain, nonatomic) NSString *titleSuffix;
@property (retain, nonatomic) NSString *buttonIconUrl;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *buttonTitleColor;
@property (retain, nonatomic) NSString *buttonBgColor;
@property (nonatomic) double buttonCornerRadius;
@property (retain, nonatomic) NSString *doneTitle;
@property (retain, nonatomic) NSString *doneButtonTitle;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

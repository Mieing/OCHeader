@class NSString;

@interface WCCanvasComponentTextAreaInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int textAlignmentType;
@property (nonatomic) long long textVerticalAlignmentType;
@property (nonatomic) unsigned int fontSize;
@property (nonatomic) unsigned int maxLines;
@property (retain, nonatomic) NSString *fontColorStr;
@property (nonatomic) int fontType;
@property (nonatomic) double lineSpace;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

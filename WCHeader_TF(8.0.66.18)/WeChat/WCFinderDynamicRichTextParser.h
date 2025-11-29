@class NSString, NSMutableArray;

@interface WCFinderDynamicRichTextParser : NSObject

@property (retain, nonatomic) NSString *richText;
@property (retain, nonatomic) NSMutableArray *items;

+ (id)parserWithRichText:(id)a0;

- (void)parse;
- (id)parseCustomLinkItem:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)createAttributedStringWith:(id)a0 color:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 iconPadding:(struct CGSize { double x0; double x1; })a3 textAlignment:(long long)a4 delegate:(id)a5;
- (id)createRichTextContentWithColor:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end

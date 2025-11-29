@class NSString, CMDocument, CMParagraphTransformerCenter, CMStack, CMCascadingAttributeStack, NSMutableDictionary, NSObject, CMTextAttributes, NSMutableArray;
@protocol CMAttributedStringRendererDelegate;

@interface CMAttributedStringRenderer : NSObject <CMParserDelegate> {
    CMDocument *_document;
    CMTextAttributes *_attributes;
    CMCascadingAttributeStack *_attributeStack;
    CMStack *_HTMLStack;
    NSMutableArray *_cascadedAttributedString;
    NSMutableDictionary *_tagNameToTransformerMapping;
}

@property (retain, nonatomic) NSMutableDictionary *paragraphKeyAndTransforms;
@property (retain, nonatomic) NSMutableDictionary *textKeyAndTransforms;
@property (retain, nonatomic) CMParagraphTransformerCenter *customParagraphTransformer;
@property (weak, nonatomic) NSObject<CMAttributedStringRendererDelegate> *delegate;
@property (nonatomic) BOOL linkDetectingInNormalTextEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentTargetAttriStr;
- (BOOL)isImageDescriptionNode:(id)a0;
- (void)transformLinkWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 containerStr:(id)a1;
- (void)detectLinkInAttributedStr:(id)a0;
- (void)appendAttributedString:(id)a0 withEnd:(id)a1;
- (void)closeBlockForNode:(id)a0;
- (BOOL)isTopParagraphWithNode:(id)a0;
- (BOOL)canHandleParagraphWithNode:(id)a0;
- (BOOL)nodeIsInTightMode:(id)a0;
- (void)addLineInfoWithSeparator:(id)a0;
- (void)mergeTopAtCascadedAttributedStrWithReplaceBlock:(id /* block */)a0;
- (id)newHTMLElementForTagName:(id)a0 HTML:(id)a1;
- (void)appendHTMLElement:(id)a0;
- (unsigned long long)sublistLevel:(id)a0;
- (void)adjustListItemIndentForNode:(id)a0 paragraphStyle:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)parser:(id)a0 foundText:(id)a1;
- (void)parser:(id)a0 didStartHeaderWithLevel:(long long)a1;
- (void)parser:(id)a0 didEndHeaderWithLevel:(long long)a1;
- (void)parserDidStartParagraph:(id)a0;
- (void)parserDidEndParagraph:(id)a0;
- (void)parserDidStartEmphasis:(id)a0;
- (void)parserDidEndEmphasis:(id)a0;
- (void)parserDidStartStrong:(id)a0;
- (void)parserDidEndStrong:(id)a0;
- (void)parser:(id)a0 didStartLinkWithURL:(id)a1 title:(id)a2;
- (void)parser:(id)a0 didEndLinkWithURL:(id)a1 title:(id)a2;
- (void)parser:(id)a0 didStartImageWithURL:(id)a1 title:(id)a2;
- (void)parser:(id)a0 didEndImageWithURL:(id)a1 title:(id)a2;
- (void)parser:(id)a0 foundHTML:(id)a1;
- (void)parser:(id)a0 foundInlineHTML:(id)a1;
- (void)parser:(id)a0 foundCodeBlock:(id)a1 info:(id)a2;
- (void)parser:(id)a0 foundInlineCode:(id)a1;
- (void)parserFoundSoftBreak:(id)a0;
- (void)parserFoundLineBreak:(id)a0;
- (void)parserDidStartBlockQuote:(id)a0;
- (void)parserDidEndBlockQuote:(id)a0;
- (void)parser:(id)a0 didStartUnorderedListWithTightness:(BOOL)a1;
- (void)parser:(id)a0 didEndUnorderedListWithTightness:(BOOL)a1;
- (void)parser:(id)a0 didStartOrderedListWithStartingNumber:(long long)a1 tight:(BOOL)a2;
- (void)parser:(id)a0 didEndOrderedListWithStartingNumber:(long long)a1 tight:(BOOL)a2;
- (void)parserDidStartListItem:(id)a0;
- (void)parserDidEndListItem:(id)a0;
- (void)registerHTMLElementTransformer:(id)a0;
- (void)registerParagraphTransformer:(id)a0;
- (void)registerInlineTextTransformer:(id)a0;
- (id)renderWithDocument:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })appendString:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0;
- (id)init;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartDocument:(id)a0;

@end

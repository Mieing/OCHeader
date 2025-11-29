@class UIColor, UIFont, NSString, NSMutableArray, IESECPrivacyVisitContext;

@interface IESECLynxTextView : BDXLynxTextView {
    IESECPrivacyVisitContext *_privacyVisitContext;
    NSString *_pageUrl;
}

@property (readonly, nonatomic) NSMutableArray *symbolTextModels;
@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (nonatomic) double mLineSpacing;

- (void)resetSymbolTypingAttributes;
- (id)getMentions;
- (void)insertTextWithMentions:(id)a0;
- (BOOL)shouldChangeSymbolTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (id)replaceEmojiTextInAttributedString:(id)a0;
- (void)reviseSymbolTextPosition;
- (void)adjustSymbolTextSelectdRange;
- (id)replaceAttachmentWithTextInAttributedString:(id)a0 removeSymbolIcon:(BOOL)a1;
- (id)getRawTextInAttributedString:(id)a0;
- (void)policyPasteboardSetString:(id)a0;
- (id)privacyVisitContext;
- (void)updateAttributedTextWithoutMoveSelectedRange:(id)a0;
- (long long)revisionaryIndex:(long long)a0;
- (void)resetDefatulTextAttributes;
- (BOOL)hasSelectedRangeInSymbolText;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)setFont:(id)a0;
- (void)cut:(id)a0;
- (id)init;
- (void)setTextColor:(id)a0;
- (void)paste:(id)a0;
- (void)setPageUrl:(id)a0;
- (id)defaultTextAttributes;

@end

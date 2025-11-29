@class NSString, NSTextStorage, RTEAttachmentViewProvider, NSMutableArray;
@protocol RTETextViewDataDelegate, RTETextViewSectionDelegate;

@interface RTETextView : UITextView <RTELayoutManagerDelegate, NSTextStorageDelegate> {
    NSTextStorage *m_textStorage;
    BOOL m_forBidSelectionChangeNotify;
    BOOL m_onSetContent;
    NSMutableArray *m_arrEditInfo;
    Class m_containerViewClass;
}

@property (nonatomic) BOOL autoResize;
@property (nonatomic) unsigned long long sectionIndex;
@property (weak, nonatomic) id<RTETextViewSectionDelegate> sectionDelegate;
@property (weak, nonatomic) id<RTETextViewDataDelegate> dataDelegate;
@property (weak, nonatomic) RTEAttachmentViewProvider *attachmentViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textStorage:(id)a0 willProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (void)notifyTextViewDidChange;
- (void)reloadAttachment:(id)a0;
- (id)layout;
- (void)getContainerViewClass;
- (void)reloadContentAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getTextAttachmentForAttribute:(id)a0;
- (void)removeAllAttachmentViews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedText:(id)a0;
- (void)setText:(id)a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addGestureRecognizer:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (void)unmarkText;
- (void)applyEditInfo;
- (void)chectHeightChange;
- (void)invalidateAttachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)storage;
- (void)drawGlyphsForGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1 attachment:(id)a2;
- (id)findSelectionView;
- (id)findSelectionViewIn:(id)a0;
- (void).cxx_destruct;

@end

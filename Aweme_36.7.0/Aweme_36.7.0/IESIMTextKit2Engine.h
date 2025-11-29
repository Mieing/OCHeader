@class UIView, NSSet, NSTextContentStorage, NSTextContainer, NSString, NSTextLayoutManager, NSAttributedString;
@protocol IESIMTextKitEngineViewContainer;

@interface IESIMTextKit2Engine : IESIMTextKitEngineCluster <NSTextViewportLayoutControllerDelegate, NSTextLayoutManagerDelegate, IESIMTextKitEngineProtocol>

@property (retain, nonatomic) NSTextContentStorage *textStorage;
@property (retain, nonatomic) NSTextContainer *textContainer;
@property (retain, nonatomic) NSTextLayoutManager *layoutManager;
@property (copy, nonatomic) NSSet *uiAttachments;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (weak, nonatomic) UIView<IESIMTextKitEngineViewContainer> *viewContainer;

+ (id)engineWithTextContainer:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutManager:(id)a0 truncatedCharacterRangeInLineFragmentForLocation:(id)a1;
+ (void)enumerateAttribute:(id)a0 engine:(id)a1 usingBlock:(id /* block */)a2;
+ (id)engine;

- (void)ensureLayoutsWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateAttachmentWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithTextContainer:(id)a0;
- (id)copyWithAttributedText:(id)a0;
- (id)highlightAtPoint:(struct CGPoint { double x0; double x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)drawBorderWithContext:(struct CGContext { } *)a0 origin:(struct CGPoint { double x0; double x1; })a1 isCancelled:(id /* block */)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)drawTextWithContext:(struct CGContext { } *)a0 origin:(struct CGPoint { double x0; double x1; })a1 isCancelled:(id /* block */)a2;
- (void)drawViewAttachmentsWithContainerView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (long long)closestSelectionPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_layoutRect;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportBoundsForTextViewportLayoutController:(id)a0;
- (id)init;
- (void)setAttributedText:(id)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)textViewportLayoutController:(id)a0 configureRenderingSurfaceForTextLayoutFragment:(id)a1;
- (struct CGSize { double x0; double x1; })containerSize;
- (id)attributedText;
- (struct CGSize { double x0; double x1; })preferredSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBoundingRect;

@end

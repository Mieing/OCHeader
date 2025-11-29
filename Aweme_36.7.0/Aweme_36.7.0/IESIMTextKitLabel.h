@class IESIMTextKitEngineCluster, NSString, IESIMTextHighlight, NSMutableSet, NSTimer, NSAttributedString;
@protocol IESIMTextKitEngineProtocol;

@interface IESIMTextKitLabel : UIView <IESIMTextKitEngineViewContainer, IESIMYYTextAsyncLayerDelegate> {
    struct { unsigned char showingHighlight : 1; unsigned char trackingTouch : 1; unsigned char swallowTouch : 1; unsigned char touchMoved : 1; unsigned char contentsNeedFade : 1; } _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *uiAttachments;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeganPoint;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (retain, nonatomic) IESIMTextHighlight *highlight;
@property (retain, nonatomic) IESIMTextKitEngineCluster<IESIMTextKitEngineProtocol> *highlightEngine;
@property (retain, nonatomic) NSTimer *longPressTimer;
@property (nonatomic) struct CGPoint { double x; double y; } textDrawOrigin;
@property (retain, nonatomic) IESIMTextKitEngineCluster<IESIMTextKitEngineProtocol> *engine;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic) id /* block */ textTapAction;
@property (copy, nonatomic) id /* block */ highlightTapAction;
@property (copy, nonatomic) id /* block */ highlightLongPressAction;
@property (nonatomic) BOOL displaysAsynchronously;
@property (nonatomic) BOOL clearContentsBeforeAsynchronouslyDisplay;
@property (nonatomic) BOOL fadeOnAsynchronouslyDisplay;
@property (nonatomic) BOOL fadeOnHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)_setLayoutNeedRedraw;
- (void)_trackDidLongPress;
- (void)_endLongPressTimer;
- (void)_removeHighlightAnimated:(BOOL)a0;
- (void)_hideHighlightAnimated:(BOOL)a0;
- (id)_getHighlightAtPoint:(struct CGPoint { double x0; double x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)_startLongPressTimer;
- (void)_showHighlightAnimated:(BOOL)a0;
- (void)_endTouch;
- (id)newAsyncDisplayTask;
- (void)textKitEngine:(id)a0 didChangeAttributedString:(id)a1;
- (long long)closestSelectionPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_calculateAccessibilityValuesIfNeededWithAttributedString:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 engine:(id)a1;
- (id)asyncLayer;
- (void)activateDynamicForegroundColor;
- (struct CGPoint { double x0; double x1; })p_textPointWithLabelPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })drawOrigin;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_clearContents;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_defaultFont;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

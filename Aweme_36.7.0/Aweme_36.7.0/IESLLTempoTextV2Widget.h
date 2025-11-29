@class UIView, NSString, IESLLTempoContext, IESLLTempoTextV2Renderer, NSAttributedString, NSDictionary, NSMutableArray, IESLLTempoAnimationContext, IESLLTempoTextLineHeightAdaptation;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoTextV2Widget : IESLLTempoBaseWidget <UIGestureRecognizerDelegate, IESLLTempoWidgetProtocol> {
    BOOL _isHasSubSpan;
}

@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attrString;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) BOOL hasNonVirtualOffspring;
@property (retain, nonatomic) IESLLTempoTextV2Renderer *textRenderer;
@property (retain, nonatomic) IESLLTempoTextLineHeightAdaptation *lineHeightAdaptation;
@property (nonatomic) double maxAscender;
@property (nonatomic) double maxDescender;
@property (nonatomic) double baseline;
@property (nonatomic) double maxLineAscender;
@property (nonatomic) double maxLineDescender;
@property (nonatomic) double maxXHeight;
@property (nonatomic) BOOL isCalcVerticalAlignValue;
@property BOOL isImageNeedProcess;
@property BOOL isMeasureProcessed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;

+ (long long)fontWeightWithRawValue:(id)a0;
+ (BOOL)isSelfMeasure;
+ (BOOL)isSelfBaseline;
+ (id)pingFangFontWithSize:(double)a0 weight:(long long)a1;
+ (id)fontFromStyleWithAttributeMap:(id)a0 styleMap:(id)a1 globalProps:(id)a2;
+ (double)fontSizeFromStyleWithAttributeMap:(id)a0 styleMap:(id)a1 globalProps:(id)a2;
+ (long long)fontWeightFromStyleWithAttributeMap:(id)a0 styleMap:(id)a1;
+ (double)uiFontWeightForTempoWeight:(long long)a0;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (double)selfBaselineWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)getLineHeight;
- (id)generateAttributedString;
- (void)loadCommonEvent;
- (id)generateAttributesWithNode:(id)a0;
- (void)determineLineSpacing:(id)a0;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithWidth:(double)a0 Height:(double)a1 AttributedString:(id)a2;
- (void)updateNonVirtualOffspringLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getPadding;
- (unsigned long long)getLineBreakFromTextOverflowWithNode:(id)a0;
- (long long)getTextMaxLine;
- (long long)getTextAlignWithNode:(id)a0;
- (long long)getVerticalAlignWithNode:(id)a0;
- (double)alignInlineNodeInVertical:(long long)a0 withLineHeight:(double)a1 withAttachmentHeight:(double)a2 withAttachmentYPosition:(double)a3;
- (void)updateHiddenAttachmentFrame:(id)a0 componentIDSet:(id)a1 attachments:(id)a2;
- (void)handleRawTextValue:(id)a0 withAttributedString:(id)a1 withTextAttribute:(id)a2 withNode:(id)a3 withIsRootText:(unsigned char)a4;
- (id)generateAttributesWithInlineTextNode:(id)a0;
- (id)processImageSizeWithNode:(id)a0 renderImg:(id)a1;
- (id)processImageBorderRadiusWithNode:(id)a0 renderImg:(id)a1;
- (id)processImageMarginWithNode:(id)a0 renderImg:(id)a1;
- (struct CGSize { double x0; double x1; })calculateImageSizeWithNode:(id)a0 renderImg:(id)a1;
- (id)generateParagraphStyleWithNode:(id)a0;
- (id)getTextColorWithNode:(id)a0;
- (id)getTextDecorationWithNode:(id)a0;
- (id)getBackgroundColorWithNode:(id)a0;
- (double)calcBaselineShiftOffset:(long long)a0 withAscender:(double)a1 withDescender:(double)a2;
- (void)loadInlineEventOnClick;
- (void)loadInlineEventOnLongClick;
- (id)getInlineWidgetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setVerticalAlign:(id)a0;
- (id)createView;
- (void)refreshData;
- (id)getText;

@end

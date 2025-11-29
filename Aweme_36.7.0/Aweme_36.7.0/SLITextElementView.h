@class verticalAlignment, NSString, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer, IESECSliceXUIFont, SLITextElementViewTailManager, YYLabel, NSMutableAttributedString, UIColor;

@interface SLITextElementView : IESECSliceXBaseContentElementView <UIGestureRecognizerDelegate> {
    struct { double maxTextAscender; double minTextDescender; double maxTextFontSize; double minTextFontSize; double maxInlineCustomHeight; verticalAlignment *unifiedFontFamily; long long x0; BOOL oneLineText; BOOL enableTap; BOOL enableLongPress; } _contentState;
    struct { UIColor *textColor; IESECSliceXUIFont *fontContext; NSString *fontFamily; unsigned long long fontStyle; double fontWeight; double fontSize; } _baseConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { double constrainedHeight; double constrainedWidth; struct CGSize { double width; double height; } measureSize; double firstLinePosition; BOOL layoutFully; } loosestMeasureResult;
@property (nonatomic) struct { double viewFullWidth; double baseline; } baselineResult;
@property (nonatomic) struct { double minFontSize; NSMutableAttributedString *originalAttrStr; } shrinkInfo;
@property (nonatomic) struct { struct CGSize { double width; double height; } fitSize; double resultFontSize; struct CGSize { double width; double height; } ceiledResultSize; } shrinkCache;
@property (retain, nonatomic) NSArray *tailContents;
@property (retain, nonatomic) SLITextElementViewTailManager *tailLayoutManager;
@property (nonatomic) struct SLITextElementViewTailRangeInfo { BOOL isShowTail; long long ellipsisStartIndex; long long tailStartIndex; } tailRangeInfo;
@property (retain, nonatomic) UITapGestureRecognizer *tapLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressLabel;
@property (nonatomic) struct { BOOL textEndEllipsis; unsigned long long maxLine; double lineHeight; long long alignment; unsigned long long wordBreak; } paragraphStyle;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) NSArray *inlineContents;

+ (void)coreInitialize;
+ (void)flexInitialize;
+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (double)sliceFlexLayoutBaselineForView:(id)a0 innerDimension:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })a1;
- (id)createAttributedStr:(id)a0 withState:(const struct { double x0; double x1; double x2; double x3; double x4; id x5; long long x6; BOOL x7; BOOL x8; BOOL x9; } *)a1;
- (void)setContentLabelAttributedText:(id)a0;
- (void)applyParagraphStyle;
- (void)setLayoutNeedUpdate;
- (void)setTailContents:(id)a0;
- (void)tapLabel:(id)a0;
- (void)longPressLabel:(id)a0;
- (id)getInlineContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetLoosestMeasureResult;
- (void)markFlexDirty;
- (void)updateOuterTextProperties;
- (void)updateVerticalAlignment:(const struct { double x0; double x1; double x2; double x3; double x4; id x5; long long x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (void)applyLineModifier;
- (id)getFontSizeAdjustedAttrStrWithContainer:(id)a0 paragraphStyle:(id)a1 resultLineHeightPtr:(double *)a2;
- (void)setupGestureIfNeededWithState:(const struct { double x0; double x1; double x2; double x3; double x4; id x5; long long x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (void)cacheShinkResultWithFitSize:(struct CGSize { double x0; double x1; })a0 fontSize:(double)a1 resultCeiledSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)appendTailContentsIfNeededWithElement:(id)a0 tailContentsRef:(id *)a1 tailManagerRef:(id *)a2 baseTextConfigRef:(const struct { id x0; id x1; id x2; unsigned long long x3; double x4; double x5; } *)a3 contentStateRef:(const struct { double x0; double x1; double x2; double x3; double x4; id x5; long long x6; BOOL x7; BOOL x8; BOOL x9; } *)a4 minFontSize:(double)a5;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;

@end

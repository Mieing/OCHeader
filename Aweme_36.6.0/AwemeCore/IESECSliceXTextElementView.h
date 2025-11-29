@class UITapGestureRecognizer, NSArray, UILongPressGestureRecognizer, SLITextElementViewTailManager, NSMutableAttributedString, YYLabel;

@interface IESECSliceXTextElementView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) double baseline;
@property (retain, nonatomic) NSArray *inlineContents;
@property (nonatomic) struct IESECSliceXTextElementParagraphStyle { BOOL isEndEllipse; unsigned long long maxLine; double lineHeight; long long alignment; unsigned long long wordBreak; } paragraphStyle;
@property (retain, nonatomic) UITapGestureRecognizer *tapLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressLabel;
@property (nonatomic) struct IESECSliceXTextElementLooseMeasureResult { double constrainedHeight; double constrainedWidth; struct CGSize { double width; double height; } measureSize; } loosestMeasureResult;
@property (retain, nonatomic) NSArray *tailContents;
@property (retain, nonatomic) SLITextElementViewTailManager *tailLayoutManager;
@property (nonatomic) struct SLITextElementViewTailRangeInfo { BOOL isShowTail; long long ellipsisStartIndex; long long tailStartIndex; } tailRangeInfo;
@property (nonatomic) struct SLITextElementTextAdaptShrinkInfo { double minFontSize; NSMutableAttributedString *originalAttrStr; } shrinkInfo;
@property (nonatomic) struct SLITextElementTextAdaptShrinkCache { struct CGSize { double width; double height; } fitSize; double resultFontSize; } shrinkCache;

+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (double)sliceFlexLayoutBaselineForView:(id)a0 innerDimension:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })a1;
- (id)createAttributedStr:(id)a0 withState:(struct IESECSliceXInlineContentState { double x0; double x1; double x2; double x3; BOOL x4; BOOL x5; })a1;
- (void)setContentLabelAttributedText:(id)a0;
- (void)applyParagraphStyle;
- (void)setLayoutNeedUpdate;
- (void)tapLabel:(id)a0;
- (void)longPressLabel:(id)a0;
- (void)resetLooseMeasureResult;
- (id)getFontSizeAdjustedAttrStrWithContainer:(id)a0 paragraphStyle:(id)a1 resultLineHeightPtr:(double *)a2 resultBaselinePtr:(double *)a3;
- (void)cacheShinkResultWithFitSize:(struct CGSize { double x0; double x1; })a0 fontSize:(double)a1;
- (id)getInlineContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;

@end

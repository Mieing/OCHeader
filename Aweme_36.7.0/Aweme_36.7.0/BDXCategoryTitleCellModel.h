@class NSString, UIColor, UIFont;

@interface BDXCategoryTitleCellModel : BDXCategoryIndicatorCellModel

@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double titleHeight;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) double titleLabelVerticalOffset;
@property (retain, nonatomic) UIColor *titleNormalColor;
@property (retain, nonatomic) UIColor *titleCurrentColor;
@property (retain, nonatomic) UIColor *titleSelectedColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *titleSelectedFont;
@property (nonatomic, getter=isTitleLabelMaskEnabled) BOOL titleLabelMaskEnabled;
@property (nonatomic, getter=isTitleLabelZoomEnabled) BOOL titleLabelZoomEnabled;
@property (nonatomic) double titleLabelNormalZoomScale;
@property (nonatomic) double titleLabelCurrentZoomScale;
@property (nonatomic) double titleLabelSelectedZoomScale;
@property (nonatomic) double titleLabelZoomSelectedVerticalOffset;
@property (nonatomic, getter=isTitleLabelStrokeWidthEnabled) BOOL titleLabelStrokeWidthEnabled;
@property (nonatomic) double titleLabelNormalStrokeWidth;
@property (nonatomic) double titleLabelCurrentStrokeWidth;
@property (nonatomic) double titleLabelSelectedStrokeWidth;
@property (nonatomic) unsigned long long titleLabelAnchorPointStyle;

- (void)updateNumberSizeWidthIfNeeded;
- (void).cxx_destruct;

@end

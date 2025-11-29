@class NSArray, UIColor, UIFont;
@protocol BDXCategoryTitleViewDataSource;

@interface BDXCategoryTitleView : BDXCategoryIndicatorView

@property (weak, nonatomic) id<BDXCategoryTitleViewDataSource> titleDataSource;
@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) long long titleNumberOfLines;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *titleSelectedColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *titleSelectedFont;
@property (nonatomic, getter=isTitleColorGradientEnabled) BOOL titleColorGradientEnabled;
@property (nonatomic, getter=isTitleLabelMaskEnabled) BOOL titleLabelMaskEnabled;
@property (nonatomic, getter=isTitleLabelZoomEnabled) BOOL titleLabelZoomEnabled;
@property (nonatomic, getter=isTitleLabelZoomScrollGradientEnabled) BOOL titleLabelZoomScrollGradientEnabled;
@property (nonatomic) double titleLabelZoomScale;
@property (nonatomic) double titleLabelZoomSelectedVerticalOffset;
@property (nonatomic, getter=isTitleLabelStrokeWidthEnabled) BOOL titleLabelStrokeWidthEnabled;
@property (nonatomic) double titleLabelSelectedStrokeWidth;
@property (nonatomic) double titleLabelVerticalOffset;
@property (nonatomic) unsigned long long titleLabelAnchorPointStyle;

- (void)initializeData;
- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:(long long)a0;
- (void)refreshSelectedCellModel:(id)a0 unselectedCellModel:(id)a1;
- (void)refreshLeftCellModel:(id)a0 rightCellModel:(id)a1 ratio:(double)a2;
- (void).cxx_destruct;

@end

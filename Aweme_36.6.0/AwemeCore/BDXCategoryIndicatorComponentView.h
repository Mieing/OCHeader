@class UIColor, NSString;

@interface BDXCategoryIndicatorComponentView : UIView <BDXCategoryIndicatorProtocol>

@property (nonatomic) unsigned long long componentPosition;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) double indicatorWidthIncrement;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double indicatorCornerRadius;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) double verticalMargin;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) unsigned long long scrollStyle;
@property (nonatomic) double scrollAnimationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)indicatorCornerRadiusValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)indicatorWidthValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)indicatorHeightValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jx_refreshState:(id)a0;
- (void)jx_contentScrollViewDidScroll:(id)a0;
- (void)jx_selectedCell:(id)a0;
- (void)configureDefaultValue;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

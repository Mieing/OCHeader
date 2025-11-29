@class NSArray, NSMutableArray, NSString;

@interface AWEBigFontSelectionSliderView : UISlider <UIGestureRecognizerDelegate>

@property (nonatomic) long long count;
@property (nonatomic) long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastThumbRect;
@property (copy, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSMutableArray *titleLabels;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)rootViewHorizontalBreakPoint;
- (void)setUpTitleLabel;
- (id)p_trackImage;
- (BOOL)font_preview_xcode16_fix;
- (void)setUpTitleLabelConstrains;
- (id)labelItemWithText:(id)a0 isSelect:(BOOL)a1;
- (double)valueOfIndex:(long long)a0;
- (id)nearestPoint:(double)a0;
- (void)adsorbToNearestPoint:(id)a0;
- (void)setTitleSelectAt:(long long)a0;
- (id)initWithTitles:(id)a0 initialIndex:(long long)a1;
- (double)calculateThumbXPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sliderTapped:(id)a0;
- (void)setUpUI;
- (long long)indexOfValue:(double)a0;

@end

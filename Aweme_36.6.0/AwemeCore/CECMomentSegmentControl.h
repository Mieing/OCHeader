@class UIFont, UIStackView, UIColor, NSArray, UIView;
@protocol CECMomentSegmentedControlDelegate;

@interface CECMomentSegmentControl : UIControl

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) double edgeInset;
@property (retain, nonatomic) NSArray *segmentItems;
@property (nonatomic) long long selectedSegmentIndex;
@property (weak, nonatomic) id<CECMomentSegmentedControlDelegate> delegate;

- (unsigned long long)segmentIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectedSegmentIndex:(long long)a0 animated:(BOOL)a1;
- (void)enableSegmentTapGes:(id)a0;
- (void)setNormalTextColor:(id)a0 animated:(BOOL)a1;
- (void)updateLabelsColorAnimated:(BOOL)a0;
- (void)setSelectedTextColor:(id)a0 animated:(BOOL)a1;
- (void)moveIndicatorToSegmentAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)insertAllSegments;
- (void)addTapGesture;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)removeAllSegments;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)handleTapGesture:(id)a0;

@end

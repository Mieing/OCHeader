@class NSString, NSMutableArray, NSArray;

@interface IESLiveProxyStackView : UIView

@property (retain, nonatomic) NSMutableArray *mutableArrangedSubviews;
@property (nonatomic) double measureMaxWidth;
@property (nonatomic) double measureMaxHeight;
@property (copy, nonatomic) NSString *originContentSize;
@property (readonly, nonatomic, getter=isHorizontal) BOOL horizontal;
@property (nonatomic) BOOL dirty;
@property (nonatomic) unsigned long long widthContentMode;
@property (nonatomic) unsigned long long heightContentMode;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) struct CGSize { double width; double height; } maxContentSize;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;
@property (copy, nonatomic) id /* block */ willUpdateConstraintsBlock;
@property (copy, nonatomic) id /* block */ didUpdateConstraintsBlock;

- (void)layoutArrangedSubviews;
- (void)removeHiddenObserverForView:(id)a0;
- (void)resetSubviewsContentSize;
- (struct CGSize { double x0; double x1; })measureArrangedSubview;
- (void)distributeArrangedSubviewsWithMeasureSize:(struct CGSize { double x0; double x1; })a0;
- (void)alignArrangedSubviewsWithMeasureSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetOriginContentSizeWithAxis:(long long)a0 compression:(BOOL)a1;
- (void)checkConstraint:(id)a0 updateWidth:(id)a1 updateHeight:(id)a2;
- (void)checkConstraint:(id)a0 updateX:(id)a1 updateY:(id)a2;
- (void)measureContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })resizeArrangedSubviewWithMeasureSize:(struct CGSize { double x0; double x1; })a0 axis:(long long)a1;
- (void)addHiddenObserverForView:(id)a0;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)addArrangedSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithArrangedSubviews:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;

@end

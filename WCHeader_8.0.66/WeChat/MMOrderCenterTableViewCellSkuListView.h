@class NSArray, NSString, MMOrderCenterTableViewCellSkuListExpander, NSMutableArray;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellSkuListView : UIView <MMOrderCenterTableViewCellComponent>

@property (retain, nonatomic) MMOrderCenterTableViewCellSkuListExpander *expander;
@property (retain, nonatomic) NSMutableArray *accessibilityElementsArray;
@property (retain, nonatomic) NSArray *skuViews;
@property (weak, nonatomic) id<MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseComponentForOrder:(id)a0;
+ (double)heightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;
+ (double)expanderHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOrder:(id)a0;
- (void)addSkuItems:(id)a0 order:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onExpanderTapped;
- (id)accessibilityElements;
- (void).cxx_destruct;

@end

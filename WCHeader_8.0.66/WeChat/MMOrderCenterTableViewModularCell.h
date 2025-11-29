@class NSArray, NSString, UIView;
@protocol MMOrderCenterTableViewModularCellDelegate, MMOrderCenterTableViewCellComponent;

@interface MMOrderCenterTableViewModularCell : MMOrderCenterTableViewCellBase <MMOrderCenterTableViewCellComponentAggregatedDelegate>

@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *headerView;
@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *skuListView;
@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *trackingView;
@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *priceView;
@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *timeReviewView;
@property (retain, nonatomic) UIView<MMOrderCenterTableViewCellComponent> *finderRefererView;
@property (retain, nonatomic) NSArray *components;
@property (weak, nonatomic) id<MMOrderCenterTableViewModularCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;

- (void)updateCellWithOrder:(id)a0;
- (void)layoutSubviews;
- (void)onCellWillDisplay;
- (void)onFinderRefererTapped;
- (void)onStoreAvatarTapped;
- (void)onExpandTapped;
- (void)onTrackingViewTapped;
- (void)onReviewButtonTapped;
- (void)reportEvent:(id)a0 params:(id)a1;
- (struct CGPoint { double x0; double x1; })layoutComponent:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 withBottomMargin:(double)a2;
- (id)updateComponent:(id)a0 ofClass:(Class)a1 withOrder:(id)a2;
- (void)updateAccessibilityElements;
- (void).cxx_destruct;

@end

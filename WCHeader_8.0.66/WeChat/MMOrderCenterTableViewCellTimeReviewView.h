@class MMCustomerOrderInfo, NSString, MMUIButton;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellTimeReviewView : UIView <MMOrderCenterTableViewCellComponent>

@property (retain, nonatomic) MMUIButton *rateButton;
@property (retain, nonatomic) MMCustomerOrderInfo *order;
@property (weak, nonatomic) id<MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;
+ (BOOL)shouldUseComponentForOrder:(id)a0;
+ (id)timeStringForOrder:(id)a0;
+ (id)rateButtonLabelForOrder:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOrder:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onCellWillDisplay;
- (void)onReviewButtonTapped;
- (void).cxx_destruct;

@end

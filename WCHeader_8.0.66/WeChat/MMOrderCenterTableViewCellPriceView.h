@class NSArray, NSString, MMCustomerOrderInfo;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellPriceView : UIView <MMOrderCenterTableViewCellComponent>

@property (retain, nonatomic) MMCustomerOrderInfo *order;
@property (retain, nonatomic) NSArray *labels;
@property (weak, nonatomic) id<MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontForType:(int)a0;
+ (BOOL)shouldUseComponentForOrder:(id)a0;
+ (void)getPartsLineIndexWith:(id)a0 getSize:(id /* block */)a1 getFont:(id /* block */)a2 maxWidth:(double)a3 partResultAction:(id /* block */)a4;
+ (double)heightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;
+ (id)itemCountLocalizedStringForOrder:(id)a0;
+ (long long)itemCountInOrder:(id)a0;
+ (id)pricePartsForOrder:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOrder:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;

@end

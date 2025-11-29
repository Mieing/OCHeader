@class NSArray, UIImageView, NSString, UILabel, MMWebImageView;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellHeaderView : UIView <MMOrderCenterTableViewCellComponent>

@property (retain, nonatomic) MMWebImageView *outletAvatarView;
@property (retain, nonatomic) UILabel *outletNameView;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UILabel *storeNameView;
@property (retain, nonatomic) NSArray *outletNameTagViews;
@property (retain, nonatomic) UILabel *statusView;
@property (weak, nonatomic) id<MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseComponentForOrder:(id)a0;
+ (double)heightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOrder:(id)a0;
- (void)updateOutletNameTagViewsWithOrder:(id)a0;
- (void)layoutSubviews;
- (void)onTapped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateStatusViewWithOrder:(id)a0;
- (id)accessibilityElements;
- (void).cxx_destruct;

@end

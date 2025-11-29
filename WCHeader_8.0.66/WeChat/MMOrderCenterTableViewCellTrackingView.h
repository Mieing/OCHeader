@class UILabel, UIImageView, NSString;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellTrackingView : UIView <MMOrderCenterTableViewCellComponent>

@property (retain, nonatomic) UILabel *statusView;
@property (retain, nonatomic) UILabel *descriptionView;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (weak, nonatomic) id<MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseComponentForOrder:(id)a0;
+ (double)heightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;
+ (id)statusForOrder:(id)a0;
+ (id)descriptionForOrder:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOrder:(id)a0;
- (void)onTapped;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end

@class MMFinderLiveFeedStreamProductStyleView, NSString;

@interface MMFinderLiveFeedStreamCarouselProductCouponCell : MMFinderLiveFeedStreamCarouselCell <MMFinderLiveFeedStreamProductStyleViewDelegate>

@property (retain, nonatomic) MMFinderLiveFeedStreamProductStyleView *couponStyleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)prepareForReuse;
- (void)reload;
- (void)layoutSubviews;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setTaskId:(id)a0;
- (id)reportWording;
- (void)onLiveFeedStreamProductStyleViewClicked:(id)a0 jump2Type:(unsigned long long)a1 productInfo:(id)a2;
- (void).cxx_destruct;

@end

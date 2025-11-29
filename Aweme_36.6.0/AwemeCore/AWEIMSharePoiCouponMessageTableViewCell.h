@class AWEIMGeneralCardView;

@interface AWEIMSharePoiCouponMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)bodyTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end

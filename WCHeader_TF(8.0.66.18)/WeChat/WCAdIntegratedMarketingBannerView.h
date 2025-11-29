@class WCDataItem, WCAdBarSingleProductInfo, NSString, WCAdBarPAGContainerInfo, WCAdBarSingleProductView, WCAdDivingPagView;

@interface WCAdIntegratedMarketingBannerView : WCAdBaseBarView <WCAdDivingPagViewDelegate, WCAdBarSingleProductDelegate, CAAnimationDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdBarPAGContainerInfo *pagInfo;
@property (retain, nonatomic) WCAdBarSingleProductInfo *singleProductInfo;
@property (nonatomic) unsigned long long itemScene;
@property (retain, nonatomic) WCAdBarSingleProductView *singleProductView;
@property (retain, nonatomic) WCAdDivingPagView *pagView;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(id)a0 maxWidth:(double)a1;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)generateSubviews;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)hidePagView;
- (void)onHidePagViewDone;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)onDivingPagViewPlayDone;
- (void)onSingleProductViewShownAnimationDone;
- (void)onSingleProductViewClicked;
- (void).cxx_destruct;

@end

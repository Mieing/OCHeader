@class MMFinderLiveHotSaleInfoView, NSDictionary, MMFinderLiveTaskId, MMFinderLiveHotSaleInfosViewPlayContext;

@interface MMFinderLiveHotSaleInfosView : UIView

@property (nonatomic) int scene;
@property (nonatomic) unsigned long long productID;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (retain, nonatomic) MMFinderLiveHotSaleInfosViewPlayContext *context;
@property (retain, nonatomic) MMFinderLiveHotSaleInfoView *nextInfoView;
@property (retain, nonatomic) MMFinderLiveHotSaleInfoView *currentInfoView;
@property (retain, nonatomic) MMFinderLiveHotSaleInfoView *lastInfoView;
@property (retain, nonatomic) NSDictionary *reportExtra;

- (id)initWithScene:(int)a0 productID:(unsigned long long)a1 taskID:(id)a2;
- (BOOL)tryUseCurrentView:(id)a0;
- (void)playOnce:(id)a0;
- (void)play;
- (void)checkWithContext:(id)a0;
- (void)reportExposeIfNeeded:(id)a0;
- (void)layoutSubviews;
- (double)bottomMargin;
- (double)spacing;
- (double)infoHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

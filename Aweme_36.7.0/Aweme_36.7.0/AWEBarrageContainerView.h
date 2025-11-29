@class NSString, NSMutableDictionary, AWEAwemeBarrageAwemeView, AWEAwemeModel, NSDictionary, NSMutableArray, NSTimer;

@interface AWEBarrageContainerView : UIView <AWEBarrageContainerViewProtocol>

@property (retain, nonatomic) AWEAwemeBarrageAwemeView *awemeBarrageView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableDictionary *barrageViewReusedPools;
@property (retain, nonatomic) NSMutableArray *barrageViews;
@property (retain, nonatomic) NSDictionary *barrageTypeClass;
@property (nonatomic, getter=isBarrageTiggered) BOOL barrageTriggered;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long loopTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long playState;
@property (copy, nonatomic) id /* block */ isHitInContainerBlock;
@property (copy, nonatomic) id /* block */ barrageViewsUpdateBlock;
@property (copy, nonatomic) id /* block */ awemeBarrageUpdateBlock;
@property (copy, nonatomic) id /* block */ barrageViewDidAppear;
@property (nonatomic) BOOL isShortStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)trigger:(id)a0;
- (id)dequeueBarrageViewWithType:(long long)a0;
- (void)triggerIfNeeded;
- (void)loop:(double)a0;
- (void)finishLoop;
- (void)handleAllBarrageViews:(id /* block */)a0 isOnTheScreen:(BOOL)a1;
- (void)updateAwemeBarrage:(id)a0;
- (void)updateBarrageViews:(id)a0;
- (void)insertBarrageView:(id)a0;
- (void)removeBarrageAtIndexSet:(id)a0;
- (void)barragePlay;
- (void)barragePause;
- (id)getTappedBarrageView:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reloadData:(id)a0;

@end

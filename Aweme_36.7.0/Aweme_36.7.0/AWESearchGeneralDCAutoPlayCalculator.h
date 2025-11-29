@class AWESearchGeneralDCAutoPlayCardInfo, NSArray, NSTimer, NSDate, NSNumber;

@interface AWESearchGeneralDCAutoPlayCalculator : AWEMSearchAutoPlayCalculator

@property (nonatomic) double activeTop;
@property (nonatomic) double activeBottom;
@property (nonatomic) double activeRatio;
@property (nonatomic) double inactiveTop;
@property (nonatomic) double inactiveBottom;
@property (nonatomic) double inactiveRatio;
@property (nonatomic) double balance;
@property (nonatomic) double speedLimit;
@property (nonatomic) double decelerateLimit;
@property (nonatomic) double scrollViewYOffset;
@property (retain, nonatomic) NSNumber *disablePlayOnScroll;
@property (retain, nonatomic) NSNumber *playDelayTime;
@property (retain, nonatomic) AWESearchGeneralDCAutoPlayCardInfo *lastCardInfo;
@property (nonatomic) struct CGPoint { double x; double y; } decelerateContentOffset;
@property (nonatomic) long long scrollCount;
@property (nonatomic) struct CGPoint { double x; double y; } scrollOffset;
@property (retain, nonatomic) NSDate *scrollDate;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSArray *playQueue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inactiveRect;
@property (copy, nonatomic) id /* block */ columeBlock;
@property (copy, nonatomic) id /* block */ cardActiveRectBlock;
@property (nonatomic) BOOL isBlocked;

- (void)currentCardPlayEnded;
- (void)updateCanActive:(BOOL)a0;
- (void)autoPlayWithRest:(BOOL)a0 onScroll:(BOOL)a1;
- (void)endAutoPlay;
- (id)p_createPlayQueue;
- (void)setUpActiveCardStopEvent;
- (void)triggerPlayFromBegin:(BOOL)a0;
- (id)p_createCardInfosWithCards:(id)a0;
- (id)p_createCardInfoWithCard:(id)a0;
- (id)p_sortCardInfos:(id)a0;
- (void)beginTimerWithInterval:(double)a0;
- (id)p_firstActivableCardInfoFromIndex:(long long)a0;
- (void)activeNextFromBegin:(id)a0;
- (void)activeNext;
- (void)didBecomeActive;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)endTimer;
- (void)didResignActive;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end

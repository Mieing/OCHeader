@class AWESearchAutoPlayHandler, NSArray, NSTimer, NSString, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchGeneralSearchWaterfallPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) BOOL isActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerActiveRect;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *playingDoubleColumnCard;
@property (retain, nonatomic) NSArray *playQueue;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *lastFinishPlayDoubleColumnCard;
@property (nonatomic) BOOL disableDoubleColumnCard;
@property (nonatomic) double speedLimit;
@property (nonatomic) double activeTop;
@property (nonatomic) double activeBottom;
@property (nonatomic) double activeRatio;
@property (nonatomic) double inactiveRatio;
@property (nonatomic) double balance;
@property (nonatomic) double playTimeInterval;
@property (nonatomic) BOOL isSearchResultMuted;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) double singleColumnCardActiveRatio;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *wantToActiveCard;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *detailFeedEntranceCard;
@property (nonatomic) BOOL reclacInNextGap;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginTimer;
- (BOOL)p_isCard1:(id)a0 equalToCard2:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateActiveRectWithContainer:(id)a0;
- (void)resetDoubleColumnStatus;
- (id)findTargetViewInQueue:(id)a0;
- (void)currentCardPlayEnded;
- (long long)p_cardIndexInPlayQueue:(id)a0;
- (BOOL)p_playQueueContainsCard:(id)a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)recalcInNextGap;
- (double)calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)forceActiveCard:(id)a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (id)init;
- (void)addObserver;
- (void)reset;
- (void)endTimer;
- (void)dealloc;
- (unsigned long long)ruleType;

@end

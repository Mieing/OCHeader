@class NSArray, AWESearchAutoPlayHandler, NSString;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchGeneralSearchDualColumnActiveLinePlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) struct CGPoint { double x; double y; } lastSpeedPoint;
@property (nonatomic) double dualColumnMaxScrollLimit;
@property (nonatomic) double dualColumnMinActivePercent;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL scrollUp;
@property (retain, nonatomic) NSArray *firstRowQueueForN0;
@property (weak, nonatomic) id<AWESearchAutoPlayCardProtocol> playingCardForN0;
@property (retain, nonatomic) id<AWESearchAutoPlayCardProtocol> lastPlayCard;
@property (nonatomic) struct CGSize { double width; double height; } dualColumnCardActiveSize;
@property (nonatomic) BOOL userScrolled;
@property (weak, nonatomic) id<AWESearchAutoPlayCardProtocol> wantToActiveCard;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)gsHeight;

- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)currentCardPlayEnded;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRectWithContainer:(id)a0;
- (id)getDualColumnCardsInFirstRowFromViews:(id)a0 inContainer:(id)a1;
- (id)findShouldActiveViewFromFirstRowForN0:(id)a0;
- (id)findShouldActiveViewForSingleCardsRule:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPlayActiveLineView:(id)a0 inContainer:(id)a1;
- (BOOL)isPlayableSingleColumnCard:(id)a0;
- (BOOL)isDualColumnCard:(id)a0;
- (void)handleRecommendWordsShowInCard:(id)a0;
- (void)handleRecommendWordsClearInCard:(id)a0;
- (void)handleCardFromInnerFlowBack:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)ruleType;

@end

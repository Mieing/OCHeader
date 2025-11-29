@class AWESearchAutoPlayHandler, NSArray, NSString, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchGeneralSearchDoubleColumnPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) BOOL isActive;
@property (nonatomic) double topActiveRedio;
@property (nonatomic) double bottomActiveRedio;
@property (retain, nonatomic) NSArray *playQueue;
@property (nonatomic) BOOL disableDoubleColumnCard;
@property (nonatomic) double speedLimit;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *wantToActiveCard;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isCard1:(id)a0 equalToCard2:(id)a1;
- (void)currentCardPlayEnded;
- (long long)p_cardIndexInPlayQueue:(id)a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)p_playQueue:(id)a0 ContainsCard:(id)a1;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (id)init;
- (unsigned long long)ruleType;

@end

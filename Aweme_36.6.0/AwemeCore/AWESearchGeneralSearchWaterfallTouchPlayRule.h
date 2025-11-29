@class AWESearchAutoPlayHandler, NSString, NSMutableSet, UIView;
@protocol AWESearchAutoPlayContainerProtocol, AWESearchAutoPlayCardProtocol;

@interface AWESearchGeneralSearchWaterfallTouchPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) BOOL isActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerActiveRect;
@property (nonatomic) BOOL disableDoubleColumnCard;
@property (nonatomic) double speedLimit;
@property (nonatomic) double activeTop;
@property (nonatomic) double activeBottom;
@property (nonatomic) double balance;
@property (retain, nonatomic) NSMutableSet *touchPlayGuideCards;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *touchPlayGuideCard;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } touchPlayGuideCardFrame;
@property (nonatomic) BOOL isTouchPlayGuideCardClicked;
@property (nonatomic) BOOL isTouchPlayGuideAddedToCard;
@property (weak, nonatomic) id<AWESearchAutoPlayContainerProtocol> container;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playingDoubleColumnCardFrame;
@property (nonatomic) BOOL isRefresh;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *playingDoubleColumnCard;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceActiveTouchedCard:(id)a0 Position:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateActiveRectWithContainer:(id)a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)handleTouchPlayGuideView;
- (void)p_handleSearchCellTouchPlayGuideView:(id)a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)setRefresh:(id)a0;
- (void)resignActive;
- (id)init;
- (unsigned long long)ruleType;

@end

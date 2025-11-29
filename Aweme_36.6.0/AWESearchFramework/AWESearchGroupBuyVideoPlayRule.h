@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchGroupBuyVideoPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) double activeRatio;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *activeCard;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateActiveRectWithContainer:(id)a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (double)calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needCheckQuickScrollSpeed;
- (long long)quickScrollSpeedConfig;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)resignActive;
- (void)applicationWillResignActive;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (unsigned long long)ruleType;
- (void)addObservers;

@end

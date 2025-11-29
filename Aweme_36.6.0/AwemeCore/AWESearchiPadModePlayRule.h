@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchiPadModePlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) BOOL isResginActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) BOOL needCheckPlayIndex;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *currentActiveViewInWaterFallLayou;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)fetchActiveRectTop;
+ (double)fetchActiveRectBottom;
+ (double)fetchShouldNotActiveHeight;
+ (BOOL)fetchShouldFilterStaticCard;

- (void)_resignCard:(id)a0;
- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRectWithContainer:(id)a0;
- (double)_calculateRelativeCenterX:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)applicationWillResignActive;
- (void)dealloc;
- (unsigned long long)ruleType;
- (void)addObservers;

@end

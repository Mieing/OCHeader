@class NSString, AWESearchAutoPlayHandler;

@interface AWESearchGeneralSearchDefaultPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) double flingSpeedLimit;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFix;

- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRectWithContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (unsigned long long)ruleType;

@end

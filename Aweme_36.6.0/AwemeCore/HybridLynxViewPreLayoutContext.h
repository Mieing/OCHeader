@class UIView;
@protocol LynxViewProtocol;

@interface HybridLynxViewPreLayoutContext : NSObject

@property (retain, nonatomic) UIView<LynxViewProtocol> *lynxView;
@property (nonatomic) float rootHeight;

+ (id)globalPropsWithConfig:(id)a0;
+ (void)reportMonitorWithConfig:(id)a0 duration:(double)a1 status:(id)a2;
+ (id)createContextWithConfig:(id)a0;
+ (id)lifeCycleTrackerWithPrelayoutConfig:(id)a0;
+ (id)preLayoutWithConfig:(id)a0;

- (void).cxx_destruct;

@end

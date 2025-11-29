@class NSString, UIView, NSObject, AWEAnimatedButton;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEBottomDuetSingViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWEAnimatedButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)clickedActionButton;
- (void).cxx_destruct;
- (Class)contextClass;

@end

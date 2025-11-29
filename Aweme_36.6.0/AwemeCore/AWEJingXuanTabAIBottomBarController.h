@class AWEJingXuanTabAIBottomBarGuideView, NSString, UIView, NSObject;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEJingXuanTabAIBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) AWEJingXuanTabAIBottomBarGuideView *aiGuideView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarDidShow;
- (void)setupBottomBarView;
- (void)trackAiBottomBarAction:(BOOL)a0;
- (void)handleAIGuideViewTap:(id)a0;
- (void).cxx_destruct;
- (id)interactionController;
- (Class)contextClass;

@end

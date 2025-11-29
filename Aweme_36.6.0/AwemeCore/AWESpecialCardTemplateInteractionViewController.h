@class NSString, UIViewController;
@protocol AWESpecialCardPanelProtocol, AWESpecialCardMonitorProtocol;

@interface AWESpecialCardTemplateInteractionViewController : AWEPlayInteractionViewController <AWESpecialCardTemplateInteractionViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWESpecialCardPanelProtocol> *panelController;
@property (retain, nonatomic) id<AWESpecialCardMonitorProtocol> specialCardMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)setPureMode:(BOOL)a0 animateDuration:(double)a1;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)removeChildVC;
- (BOOL)loadElementContainerByProvider;
- (void)addSpecialCardTemplateChildVC;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)pageDidDisappear:(BOOL)a0;
- (void)pageWillAppear:(BOOL)a0;
- (void)pageWillDisappear:(BOOL)a0;

@end

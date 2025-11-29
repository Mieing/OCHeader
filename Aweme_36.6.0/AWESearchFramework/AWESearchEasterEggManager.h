@class NSString, NSTimer, AWESearchCommonEasterEggModel, UIPanGestureRecognizer, AWESearchDynamicEngine;

@interface AWESearchEasterEggManager : NSObject <AWESearchDynamicEngineDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWESearchDynamicEngine *easterEggLynxEngine;
@property (copy, nonatomic) NSString *lastShownEggToken;
@property (retain, nonatomic) AWESearchCommonEasterEggModel *easterEggModel;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIPanGestureRecognizer *interactivePopGesture;
@property (copy, nonatomic) id /* block */ easterEggViewShouldShowBlock;
@property (copy, nonatomic) id /* block */ easterEggViewDidDismissBlock;
@property (copy, nonatomic) id /* block */ shouldResumeAutoplayBlock;
@property (nonatomic) BOOL isModuleEasterEgg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxEngineDidMount:(id)a0;
- (void)interactivePopGestureDidTrigger:(id)a0;
- (void)dismissEasterEgg;
- (void)updateEasterEggViewWithModel:(id)a0;
- (void)updataModuleEasterEggViewWithMOdel:(id)a0;
- (void)openEasterEgg;
- (BOOL)shouldShowEasterEgg;
- (id)dynamicPatchModelWithEasterEggModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })easterEggFrameWith:(id)a0;
- (void)registBridge;
- (long long)easterEggLayoutTypeWith:(unsigned long long)a0;
- (void)updateEasterEggToken:(id)a0 withType:(unsigned long long)a1;
- (void)easterEggResumeAutoplayWithTime:(double)a0;
- (void)trackSearchEasterEggError;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)addObserver;

@end

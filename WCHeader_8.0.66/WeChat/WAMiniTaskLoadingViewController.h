@class MinimizeTaskData, UIImageView, WAUINavigationController, MinimizeTaskOpenContext, NSString, WAAppTansitionController;

@interface WAMiniTaskLoadingViewController : MMUIViewController <UIViewControllerTransitioningDelegate> {
    WAAppTansitionController *m_transitionController;
}

@property (retain, nonatomic) UIImageView *snapShotView;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) MinimizeTaskOpenContext *openContext;
@property (retain, nonatomic) WAUINavigationController *weappNav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMinimizeTaskKey:(id)a0 openContext:(id)a1;
- (void)viewDidLoad;
- (void)setUpSnapShotView;
- (void)viewDidBePresented:(BOOL)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForPresentation:(id)a0;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void).cxx_destruct;

@end

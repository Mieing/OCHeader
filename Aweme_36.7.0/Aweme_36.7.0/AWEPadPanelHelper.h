@class UIScrollView, NSString, AWEPadPanelTransitionController;

@interface AWEPadPanelHelper : NSObject <AFDModalViewHelperProtocol>

@property (retain, nonatomic) AWEPadPanelTransitionController *transitionController;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTransitionController:(id)a0 contentHeight:(double)a1 cornerRadius:(double)a2;
- (void)updateContentHeight:(double)a0 viewController:(id)a1;
- (void)setupTransitionController:(id)a0 contentHeight:(double)a1 cornerRadius:(double)a2 disablePanGes:(BOOL)a3;
- (void)changeViewCornerRadius:(double)a0 viewController:(id)a1;
- (void)setupTransitionController:(id)a0 contentHeight:(double)a1 contentWidth:(double)a2 cornerRadius:(double)a3;
- (void)updateContentHeight:(double)a0 contentWidth:(double)a1 viewController:(id)a2;
- (void).cxx_destruct;

@end

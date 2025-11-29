@class NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWESearchPanelContainerViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *panelView;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (copy, nonatomic) id /* block */ closeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanel;
- (void)dismissPanel;
- (void)setupGes;
- (void)checkContainerState:(id)a0;
- (void)closeController;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)panGestureRecognizerAction:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end

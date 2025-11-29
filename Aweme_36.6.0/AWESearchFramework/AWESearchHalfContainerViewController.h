@class AWESearchViewController, UIImageView, NSDictionary, UIView, NSString, UIPanGestureRecognizer;

@interface AWESearchHalfContainerViewController : UIViewController <AWESearchViewControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWESearchViewController *searchViewController;
@property (retain, nonatomic) UIView *backGroudView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *slideImageView;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) double mulripleScreen;
@property (nonatomic) BOOL isTracked;
@property (copy, nonatomic) id /* block */ closeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)setupContainerUI;
- (void)addPanGR;
- (void)panGestureRecognizerAction;
- (void)feedVideoPlay:(BOOL)a0;
- (void)clickDismissPopover;
- (BOOL)shouldPanGestureBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)setSearchSchemaParams:(id)a0;
- (void)updateFullSearchUI:(BOOL)a0;
- (void)retureButtonAction;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)panGestureRecognizerAction:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)keyboardWillChange:(id)a0;
- (void)setupUI;
- (id)initWithSchema:(id)a0;

@end

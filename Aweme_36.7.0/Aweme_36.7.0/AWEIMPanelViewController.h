@class UIPanGestureRecognizer, NSString, NSArray, AWEIMAccessibilityMaskView, UIView, UIButton;

@interface AWEIMPanelViewController : UIViewController <AWEIMInAppPushProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMAccessibilityMaskView *tapDismissView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL canShowInnerPush;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL canTapMaskDismiss;
@property (copy, nonatomic) NSArray *viewModelArray;
@property (copy, nonatomic) id /* block */ didTapMaskToDismissBlock;
@property (copy, nonatomic) id /* block */ didTapCloseToDismissBlock;
@property (copy, nonatomic) id /* block */ didDragToDismissBlock;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;

- (void)showPanel;
- (void)dismissPanelAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)tappedBlankMask;
- (void)onCloseTapped;
- (void)containerPanned:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end

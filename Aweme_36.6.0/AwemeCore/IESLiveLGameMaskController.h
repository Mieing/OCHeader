@class NSString;

@interface IESLiveLGameMaskController : UIViewController <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ clickBlankAreaBlk;
@property (nonatomic) long long animationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeControllerWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showControllerWithCompletion:(id /* block */)a0;
- (void)closeControllerWithCompletion:(id /* block */)a0;
- (void)showControllerWithParentVC:(id)a0 containerView:(id)a1 inLive:(BOOL)a2 completion:(id /* block */)a3;
- (void)clickBlankArea;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;

@end

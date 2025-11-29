@class IESLiveSearchPlaceholderViewController, IESLiveSearchSugViewController, NSString;
@protocol IESLiveSearchMiddleProtocol;

@interface IESLiveSearchMiddleViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveSearchPlaceholderViewController *searchPlaceholderViewController;
@property (weak, nonatomic) id<IESLiveSearchMiddleProtocol> delegete;
@property (retain, nonatomic) IESLiveSearchSugViewController *searchSugViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)backgroundTap;
- (void)hideSugOrPlaceholderAnimationWithCompletion:(id /* block */)a0;
- (void)showSugOrPlaceholderAnimationWithText:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;

@end

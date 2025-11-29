@class UIViewController;

@interface FPLifecycleOwner : NSObject <FPLifecycleOwner, FPPlainInitable>

@property (nonatomic) unsigned long long pageState;
@property (nonatomic) long long appState;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) BOOL isPresenting;
@property (readonly, nonatomic) BOOL isTopVC;

- (void)applicationDidChangeStatusBarOrientation;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)resignActive;
- (id)init;
- (void)didAppear;
- (void)didDisappear;
- (void)enterForeground;
- (void)dealloc;
- (void)willDisappear;
- (void)willAppear;
- (void)didLoad;

@end

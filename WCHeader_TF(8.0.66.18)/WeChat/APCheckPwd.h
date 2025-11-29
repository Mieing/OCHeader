@class UIViewController;
@protocol APCheckPwdDelegate;

@interface APCheckPwd : APBase <PBMessageObserverDelegate>

@property (weak, nonatomic) id<APCheckPwdDelegate> delegate;
@property (weak, nonatomic) UIViewController *viewController;

- (void)dealloc;
- (void)start;
- (void)didSuccess;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

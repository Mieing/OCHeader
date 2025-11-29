@interface MMLimitedModeVerifyViewController : MMVerifyPasswordViewController

@property (nonatomic) long long scene;

- (void)viewDidLoad;
- (void)onVerifyPasswordSuccess:(id)a0;
- (void)onVerifyPasswordFail;

@end

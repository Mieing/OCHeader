@class MMUILabel;

@interface MMLimitedModeSecondVerifyViewController : MMVerifyPasswordViewController {
    MMUILabel *m_descLabel;
}

@property (nonatomic) long long scene;

- (void)viewDidLoad;
- (void)onVerifyPasswordSuccess:(id)a0;
- (void)onVerifyPasswordFail;
- (void).cxx_destruct;

@end

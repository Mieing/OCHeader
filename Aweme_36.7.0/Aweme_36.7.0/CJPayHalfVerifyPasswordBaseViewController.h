@class CJPayButton, CJPayVerifyPasswordViewModel;

@interface CJPayHalfVerifyPasswordBaseViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (nonatomic) BOOL nonFirstAppear;
@property (retain, nonatomic) CJPayButton *topRightButton;

- (void)closeWithAnimation:(BOOL)a0 comletion:(id /* block */)a1;
- (void)p_clearPasswordInput;
- (id)p_pageTitleStr;
- (void)p_setupOtherVerifyBtn;
- (void)p_screenShotDetected;
- (void)p_screenCaptureDetected:(id)a0;
- (BOOL)p_isBioPayAvailable;
- (id)initWithAnimationType:(unsigned long long)a0 viewModel:(id)a1;
- (BOOL)p_isShowBioVerify;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end

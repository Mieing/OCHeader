@class MMScreenShotReporter, NSString, MMScreenShotInfo, MMScreenShotForwardView;

@interface MMScreenShotMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMScreenShotForwardView *forwardView;
@property (nonatomic) unsigned long long takeScreenShotTime;
@property (retain, nonatomic) MMScreenShotInfo *screenShotInfo;
@property (readonly, nonatomic) MMScreenShotReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnable;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)onUserDidTakeScreenshot;
- (void)animateShowView;
- (id)findWindowToAttach;
- (void)hideView:(id)a0;
- (void)onClickForwardButton;
- (void)fetchLastImage:(id /* block */)a0;
- (void)fetchLastMMAsset:(id /* block */)a0 times:(int)a1;
- (id)findViewControllerToShow;
- (void).cxx_destruct;

@end

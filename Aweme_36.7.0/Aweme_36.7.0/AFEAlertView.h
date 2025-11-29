@interface AFEAlertView : NSObject

@property (copy, nonatomic) id /* block */ fblk;
@property (copy, nonatomic) id /* block */ sblk;
@property BOOL isAlertViewShow;

+ (id)sharedInstance;

- (void)displayAlertViewWithTitle:(id)a0 message:(id)a1 firstButtonTitle:(id)a2 secondBittonTitle:(id)a3 firstCallBack:(id /* block */)a4 secondCallBack:(id /* block */)a5 withVC:(id)a6;
- (void)displayLivnessFailAlertView:(id)a0 tips:(id)a1 cancleTip:(id)a2 retryTip:(id)a3 withCancelCallBack:(id /* block */)a4 retryCallBack:(id /* block */)a5 withVC:(id)a6;
- (void)displayCameraPermissionAlert:(id)a0 title:(id)a1 detailTitle:(id)a2 cancleTip:(id)a3 retryTip:(id)a4 cancelCallBack:(id /* block */)a5 setCallBack:(id /* block */)a6;
- (BOOL)isAPBAlertViewController;
- (void).cxx_destruct;
- (id)keyWindow;
- (id)currentViewController;

@end

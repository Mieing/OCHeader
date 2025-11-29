@protocol CJPayTrackerProtocol;

@interface CJPayBDButtonInfoHandler : NSObject

@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

+ (id)findPwdUrlWithAppID:(id)a0 merchantID:(id)a1 smchID:(id)a2;
+ (BOOL)showErrorTips:(id)a0;
+ (BOOL)showDoubleButtonAlertWithSimpleStyle:(id)a0;
+ (BOOL)showForgetPwdWithFaceVerifyAlert:(id)a0;
+ (id)shareInstance;

- (BOOL)handleButtonInfo:(id)a0 fromVC:(id)a1 errorMsg:(id)a2 withActions:(id)a3 trackDelegate:(id)a4 withAppID:(id)a5 merchantID:(id)a6;
- (BOOL)handleButtonInfo:(id)a0 fromVC:(id)a1 errorMsg:(id)a2 withActions:(id)a3 withAppID:(id)a4 merchantID:(id)a5;
- (void)handleButtonInfo:(id)a0 fromVC:(id)a1 errorMsg:(id)a2 withActions:(id)a3 withAppID:(id)a4 merchantID:(id)a5 alertCompletion:(id /* block */)a6;
- (void)execActionWithActionNum:(id)a0 buttonInfo:(id)a1 withActions:(id)a2 fromVC:(id)a3 alertVC:(id)a4;
- (void)p_trackerEvent:(id)a0 buttonInfo:(id)a1 params:(id)a2;
- (void)p_presentAlertVC:(id)a0 fromVC:(id)a1;
- (void)p_trackIMServiceWithEvent:(id)a0 buttonInfo:(id)a1 params:(id)a2;
- (void)p_closeAlertVC:(id)a0 action:(id /* block */)a1;
- (void).cxx_destruct;

@end

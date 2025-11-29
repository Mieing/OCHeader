@class NSString;

@interface WeAppCore.WALoadingNetWorkInvalidTipsViewController : MMUIViewController <WACapsuleMenuDelegate> {
    void /* unknown type, empty encoding */ tipIcon;
    void /* unknown type, empty encoding */ tipMsgLabel;
    void /* unknown type, empty encoding */ retryBtn;
    void /* unknown type, empty encoding */ capsuleMenu;
    void /* unknown type, empty encoding */ tipsMsg;
    void /* unknown type, empty encoding */ onRetryAction;
}

@property (nonatomic, copy) NSString *tipsMsg;
@property (nonatomic) void /* unknown type, empty encoding */ showCapsuleMenu;
@property (nonatomic, copy) id /* block */ onRetryAction;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onRetry:(id)a0;
- (void)onMenuExit:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

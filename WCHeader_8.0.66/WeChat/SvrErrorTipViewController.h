@class NSString, UILabel;

@interface SvrErrorTipViewController : MMWindowViewController {
    UILabel *_tipsLabel;
    NSString *_errTip;
}

@property (retain, nonatomic) NSString *urlStr;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)onIKnowClicked;
- (void)onDetailBtnClicked;
- (void)hideView;
- (void)updateErrTip:(id)a0;
- (void)viewDidTransitionToNewSize;
- (void)setupInfoView;
- (void)jumpUrl:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, AWEButton, AWEAwemeModel, AWEAdSpecialWebViewController, NSTimer;

@interface AWEAdFormOperationGuideViewController : UIViewController <UIGestureRecognizerDelegate, AWEAdFormOperationGuideViewController>

@property (retain, nonatomic) AWEAdSpecialWebViewController *webViewController;
@property (retain, nonatomic) AWEButton *replayBtn;
@property (retain, nonatomic) AWEButton *lookDetailBtn;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *cssStr;
@property (nonatomic) BOOL isOldFormURL;
@property (nonatomic) BOOL isInteractedOnAdOperationGuideWebView;
@property (retain, nonatomic) NSTimer *replayTimer;
@property (nonatomic) long long replaySecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) BOOL formSubmitSuccess;
@property (nonatomic) BOOL shouldCloseFormOperation;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)detectAbnormalDisplay;
- (void)setupNotification;
- (void)closeReplayTimer;
- (void)registerOldFormEventIfNeeded;
- (void)adjustSubview;
- (void)injectCSS;
- (void)changeShouldShowFormOperation;
- (void)formDidSubmit;
- (void)resetCard:(id)a0;
- (void)adCardStatusUpdate:(id)a0;
- (void)resetReplayBtnTitle;
- (void)preLoadCSS;
- (id)adapter_preLoadCSS;
- (void)replayBtnClicked:(id)a0;
- (void)lookDetailBtnClicked:(id)a0;
- (void)interactedOnAdOperationGuideView;
- (void)showFromView:(id)a0 model:(id)a1;
- (void)setupSubview;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)keyboardWillHide:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)startMonitor;

@end

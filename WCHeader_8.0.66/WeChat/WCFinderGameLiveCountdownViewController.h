@class NSString, MMLiveCountdownTipsView;
@protocol WCFinderGameLiveCountdownViewControllerDelegate;

@interface WCFinderGameLiveCountdownViewController : MMCPUIViewController <MMLiveCountdownTipsViewDelegate>

@property (retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView;
@property (nonatomic) long long countdownTimer;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (weak, nonatomic) id<WCFinderGameLiveCountdownViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCountdownTimer:(long long)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)layoutCountdownTipsView;
- (void)showCountdownView;
- (void)hideCountdownView;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (void).cxx_destruct;

@end

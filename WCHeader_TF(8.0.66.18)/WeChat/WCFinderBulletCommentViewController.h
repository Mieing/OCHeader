@class NSString, WCFinderBulletInputView, WCFinderFeedContentVM, WCFinderBulletItem, UIButton;
@protocol WCFinderBulletCommentViewControllerDelegate;

@interface WCFinderBulletCommentViewController : MMUIViewController <WCFinderBulletInputViewDelegate>

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) WCFinderBulletInputView *bulletInputView;
@property (weak, nonatomic) id<WCFinderBulletCommentViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldShowSwitchButton;
@property (retain, nonatomic) WCFinderBulletItem *replyItem;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showBulletInputView;
- (void)hideBulletInputView;
- (void)onBackgroundButtonClicked:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)onCommitBulletCommentWithText:(id)a0;
- (void)onInputViewChangeBulletSwitchOpenState:(BOOL)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end

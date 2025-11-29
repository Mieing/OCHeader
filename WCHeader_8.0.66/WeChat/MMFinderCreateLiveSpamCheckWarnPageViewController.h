@class MMFinderCreateLiveSpamCheckReportSession, FinderCreateLiveWarnPageCommon, MMWebImageView, NSString, UIButton, MMFinderLiveTaskId, RichTextView, MMUILabel, UIScrollView;
@protocol MMFinderCreateLiveSpamCheckWarnPageVCDelegate;

@interface MMFinderCreateLiveSpamCheckWarnPageViewController : MMCPUIViewController <MMWebViewDelegate, ILinkEventExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMWebImageView *logoView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) RichTextView *contentRichTextView;
@property (retain, nonatomic) UIScrollView *spamScrollView;
@property (retain, nonatomic) FinderCreateLiveWarnPageCommon *warnPage;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) RichTextView *appealLinkTV;
@property (nonatomic) int warnType;
@property (nonatomic) BOOL hasVerified;
@property (retain, nonatomic) MMFinderCreateLiveSpamCheckReportSession *reportSession;
@property (weak, nonatomic) id<MMFinderCreateLiveSpamCheckWarnPageVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 warnPage:(id)a1 warnType:(int)a2;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)reportExposeElement;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (long long)getCurrentOrientation;
- (void)dealloc;
- (void)checkSetIsVerifying:(BOOL)a0;
- (void)layoutUI;
- (int)commentSceneWithWarnType:(int)a0;
- (void)registerYReportSdk;
- (void)onActionButtonClicked;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewReturn:(id)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)onFaceVerifySucceeded;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end

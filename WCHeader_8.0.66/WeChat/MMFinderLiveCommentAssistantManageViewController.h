@class MMFinderLiveCommentAssitantManageViewModel, MMFinderLiveTaskId, WCLiveBlurButton, MMFinderLiveCommentAssitantManageView;

@interface MMFinderLiveCommentAssistantManageViewController : MMUILandscapeSheetViewController

@property (retain, nonatomic) MMFinderLiveCommentAssitantManageView *manageView;
@property (retain, nonatomic) MMFinderLiveCommentAssitantManageViewModel *manageViewModel;
@property (retain, nonatomic) WCLiveBlurButton *closeButton;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;

+ (void)presentCommentAssitantManageVCFromVC:(id)a0 taskId:(id)a1;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)onCloseButtonClicked;
- (void).cxx_destruct;

@end

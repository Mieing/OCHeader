@class WCFinderAnimationLoadingView, UIButton, NSString, WCFinderFeedContentVM, UIView, NSMutableArray, UITableView;

@interface MMFinderLiveFeedCommitFeedbackReasonSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) int commentScene;
@property (nonatomic) long long liveScene;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) int satisfactionQuestSubType;
@property (nonatomic) BOOL isClosing;
@property (retain, nonatomic) NSMutableArray *selectReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(unsigned long long)a0 contentVM:(id)a1 commentScene:(int)a2 liveScene:(long long)a3 satisfactionQuestSubType:(int)a4;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (void)initViews;
- (void)reload;
- (id)reason:(unsigned long long)a0;
- (void)onRetry;
- (void)onCommit;
- (unsigned long long)dislikePanelSceneFrom:(long long)a0;
- (long long)reasonCount;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetWillAppear;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onFeedContentFeedbackReasonChanged:(id)a0;
- (void)onFeedContentFeedbackReasonFetchFail:(id)a0;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)a0;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)a0;
- (void).cxx_destruct;

@end

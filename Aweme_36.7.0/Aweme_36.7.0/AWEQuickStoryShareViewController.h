@class UIView, NSString, NSArray, AWEQuickStoryShareTableViewCellViewModel, AWEQuickStorySaveTableViewCell, NSMutableDictionary, AWEVideoPublishViewModel, UITableView, MASConstraint, NSMutableSet, AWEQuickStoryShareHoverableContainerView, AWEQuickStoryShareTableViewCell;
@protocol AWEQuickStoryShareViewDelegate;

@interface AWEQuickStoryShareViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEQuickStoryShareHoverableContainerView *contentView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *bottomButtonView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableDictionary *shareCellViewModelMap;
@property (nonatomic) BOOL noEditButton;
@property (retain, nonatomic) NSMutableSet *trackConsetutiveChatShowSet;
@property (retain, nonatomic) MASConstraint *contentViewShowingConstraint;
@property (retain, nonatomic) MASConstraint *contentViewDismissedConstraint;
@property (retain, nonatomic) AWEQuickStoryShareTableViewCellViewModel *saveViewModel;
@property (retain, nonatomic) AWEQuickStoryShareTableViewCell *downloadingCell;
@property (retain, nonatomic) AWEQuickStorySaveTableViewCell *saveCell;
@property (weak, nonatomic) id<AWEQuickStoryShareViewDelegate> delegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL isDownloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)publishAction;
- (void)quickStoryAction;
- (void)gotoMessageAction;
- (void)configPublishButtonIconWithUserAvatar:(id)a0;
- (void)updateUIWithIMShareModels:(id)a0 shared:(BOOL)a1;
- (BOOL)isOnlyShareToFriendsStyle;
- (void)panContentView:(id)a0;
- (void)setupDataSourceWithShareModelList:(id)a0;
- (void)updateContentViewHeightIfNeeded:(BOOL)a0;
- (id)getFirstSectionData;
- (id)getSecondSectionData:(id)a0;
- (void)handleActionWithType:(unsigned long long)a0 cell:(id)a1;
- (void)fetchConsecutiveChatDataWithViewModelList:(id)a0;
- (void)updateBottomButtonView:(BOOL)a0;
- (void)dismissWithTap:(id)a0;
- (void)hiddenContentViewLayout;
- (void)resetUIData;
- (void)showContentViewLayout;
- (void)gotoPublishAction;
- (void)updateDownloadComplete;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)fetchData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)setupUI;
- (void)updateDownloadProgress:(double)a0;

@end

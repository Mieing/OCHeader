@class NSArray, NSString, UILabel, UIView, UITableView;

@interface AFDCloseFriendsEmptyPageView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AFDCloseFriendsEmptyViewProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL isWidgetInstalled;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAsNoMoreData;
- (void)showAsNoMomentData;
- (void)showAsOwnTabNoData;
- (void)showStoryAsEmptyData;
- (void)showStoryAsNoMoreData;
- (id)defaultData;
- (id)noMoreData;
- (void)checkWidgetInstalledWithCompletion:(id /* block */)a0;
- (id)storyFeedEmptyPageList;
- (id)noMomentData;
- (id)emptyPageList;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupUI;

@end

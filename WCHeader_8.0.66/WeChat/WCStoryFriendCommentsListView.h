@class UILabel, NSString, UITableView;
@protocol WCStoryFriendCommentsListViewDelegate, WCStoryFriendCommentsListViewDataSource;

@interface WCStoryFriendCommentsListView : MMUIView <UITableViewDataSource, UITableViewDelegate, WCStoryFriendCommmentHeadCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<WCStoryFriendCommentsListViewDelegate> delegate;
@property (weak, nonatomic) id<WCStoryFriendCommentsListViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollToBottom:(BOOL)a0;
- (void)reloadData;
- (void)setup;
- (void)setupSubViews;
- (void)updateUI;
- (void)setupGesture;
- (void)handlePanGesture:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)StoryFriendCommmentHeadCellD:(id)a0 didClickBodyViewWithComment:(id)a1;
- (void)StoryFriendCommmentHeadCellD:(id)a0 didClickHeadViewWithComment:(id)a1;
- (void).cxx_destruct;

@end

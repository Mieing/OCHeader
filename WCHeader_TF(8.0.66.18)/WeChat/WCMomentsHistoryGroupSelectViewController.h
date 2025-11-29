@class WCMomentsHistoryGroupViewModel, NSString, NSMutableSet, UILabel, MMTableView;
@protocol WCMomentsHistoryGroupSelectViewControllerDelegate;

@interface WCMomentsHistoryGroupSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) WCMomentsHistoryGroupViewModel *historyGroupVM;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableSet *selectedHistoryGroupContactSet;
@property (retain, nonatomic) UILabel *noHistoryGroupTips;
@property (weak, nonatomic) id<WCMomentsHistoryGroupSelectViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initView;
- (void)initTableView;
- (void)initNoHistoryGroupTips;
- (void)updateNoHistoryGroupTipsFrame;
- (void)updateViewDisplayStateWithHistoryGroupCout:(unsigned long long)a0;
- (void)updateRightBarButtonWithState:(BOOL)a0;
- (void)onDismissBarButtonPress:(id)a0;
- (void)onSaveBarButtonPress:(id)a0;
- (BOOL)isSelected:(id)a0;
- (void)openGroupDetailWithGroupContact:(id)a0;
- (void)onPopRoomContactVC;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

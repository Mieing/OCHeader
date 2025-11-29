@class NSArray, NSString, UITableView;

@interface IESLiveKTVTabSortSelectionView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *sortArray;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ didSelectedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindAction;
- (id)initWithScaleRatio:(long long)a0;
- (void)renderViewWithSuperView:(id)a0 sortArray:(id)a1 index:(long long)a2;
- (void)setupEnableUserGuideUI;
- (void)p_folderSortTable;
- (void)updateSortArrayWithArray:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)clean;

@end

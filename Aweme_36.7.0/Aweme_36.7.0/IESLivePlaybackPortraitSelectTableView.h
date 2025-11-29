@class NSArray, NSString, UITableView;

@interface IESLivePlaybackPortraitSelectTableView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) long long selectIdx;
@property (readonly, nonatomic) double tableViewHeight;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataList:(id)a0;
- (void)dismissSelectTableView;
- (void)showSelectTableView;
- (void)updateDataList:(id)a0 initialIndex:(long long)a1;
- (double)tableViewBottom;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setup;
- (void)setupSubviews;
- (double)viewHeight;

@end

@class HTSLiveGradientBackgroundView, NSArray, HTSEventContext, NSString, IESLivePlaybackHighlightDetailHeader, UITableView;

@interface IESLivePlaybackHighlightDetailTableView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) HTSLiveGradientBackgroundView *container;
@property (retain, nonatomic) IESLivePlaybackHighlightDetailHeader *headerTitle;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) unsigned long long selectIdx;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissSelectTableView;
- (void)showSelectTableView;
- (void)updateDataList:(id)a0 initialIndex:(unsigned long long)a1;
- (void)trackCellActionName:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setup;
- (void)setupTableView;

@end

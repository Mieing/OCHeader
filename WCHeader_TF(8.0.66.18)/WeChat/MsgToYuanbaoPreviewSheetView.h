@class NSArray, NSString, UITableView;

@interface MsgToYuanbaoPreviewSheetView : MMAutoLayoutSheetView <ILinkEventExt, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *selectMsg;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectMsg:(id)a0 objects:(id)a1;
- (void)initConfigs;
- (void)initView;
- (void)layoutSubviews;
- (double)pageSheetContentHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end

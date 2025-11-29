@class NSArray, NSString;
@protocol MMLimitedModeConfigListViewDelegate, MMLimitedModeBizCellDelegate;

@interface MMLimitedModeConfigListView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *bizTypes;
@property (weak, nonatomic) id<MMLimitedModeConfigListViewDelegate, MMLimitedModeBizCellDelegate> limitedDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canShowLiveConfig;
- (double)listViewHeight;
- (id)getBizTypes;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

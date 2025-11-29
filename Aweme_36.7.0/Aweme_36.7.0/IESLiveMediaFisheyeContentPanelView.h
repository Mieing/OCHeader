@class NSArray, IESLiveGuideModel, NSString, NSMutableArray, UITableView;

@interface IESLiveMediaFisheyeContentPanelView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *limitAppConfigArray;
@property (retain, nonatomic) NSMutableArray *selectedAppidMutiArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGuideModel:(id)a0 limitAppConfig:(id)a1 attachingDIContext:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;

@end

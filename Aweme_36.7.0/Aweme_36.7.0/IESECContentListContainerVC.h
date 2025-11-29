@class NSString, NSMutableArray, UITableView;
@protocol IESECContentListLifeCycleProtocol, IESECContentListDataProviderProtocol;

@interface IESECContentListContainerVC : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) id<IESECContentListDataProviderProtocol> dataProvider;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL requesting;
@property (retain, nonatomic) NSMutableArray *widgets;
@property (weak, nonatomic) id<IESECContentListLifeCycleProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerLoadMore;
- (void)addWidget:(id)a0;
- (void)setFirstCellAlpha:(double)a0;
- (id)initWithDataProvider:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupViews;

@end

@class NSString, NSArray, IESLiveKTVOrderPanelSearchSectionModel, UITableView;

@interface IESLiveKTVSearchAssociationView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveKTVOrderPanelSearchSectionModel *model;
@property (copy, nonatomic) NSString *word;
@property (retain, nonatomic) NSArray *searchArray;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *imprId;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ selectedActionBlock;
@property (copy, nonatomic) id /* block */ willDisplayActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithWord:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;

@end

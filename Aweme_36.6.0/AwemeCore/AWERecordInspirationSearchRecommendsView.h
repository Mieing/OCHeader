@class NSArray, NSString, UITableView;

@interface AWERecordInspirationSearchRecommendsView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *recommendationModels;
@property (copy, nonatomic) id /* block */ searchRecommendsViewSelectAction;
@property (copy, nonatomic) id /* block */ tappedPageAction;
@property (copy, nonatomic) id /* block */ scrollPageActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onThemeChanged;
- (void)updateRecommendations:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end

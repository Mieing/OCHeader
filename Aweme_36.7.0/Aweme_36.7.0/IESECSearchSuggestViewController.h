@class NSArray, NSString, UITableView;
@protocol IESECSearchSuggestViewControllerDelegate;

@interface IESECSearchSuggestViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESECSearchSuggestCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<IESECSearchSuggestViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)iesec_overrideColorTheme;
- (void)searchSuggestCellDidSelectSuggestionItem:(id)a0;
- (void)searchSuggestCellDidClickPopulateButton:(id)a0;
- (void).cxx_destruct;
- (void)updateSuggestions:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end

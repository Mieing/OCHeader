@class UITableView, NSArray, NSString, NSMutableSet, UIView, IESCategoryModel;
@protocol ACCLoadingViewProtocol;

@interface AWEFilterBoxView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (copy, nonatomic) NSArray *filterCategorys;
@property (retain, nonatomic) IESCategoryModel *currentCategory;
@property (retain, nonatomic) UITableView *categoryTableView;
@property (retain, nonatomic) UITableView *filterTableView;
@property (retain, nonatomic) NSMutableSet *checkSet;
@property (retain, nonatomic) NSMutableSet *uncheckSet;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *categoryBackgroundView;
@property (readonly, nonatomic) NSArray *checkArray;
@property (readonly, nonatomic) NSArray *uncheckArray;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) id /* block */ selectionBlock;
@property (copy, nonatomic) id /* block */ unselectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLoading:(BOOL)a0;
- (unsigned long long)p_cellIconStyle;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)showError:(BOOL)a0;

@end

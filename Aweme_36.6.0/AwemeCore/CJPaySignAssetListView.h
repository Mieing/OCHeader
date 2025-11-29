@class NSArray, UITableView;

@interface CJPaySignAssetListView : UIView

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *assetInfoModels;
@property (copy, nonatomic) id /* block */ didSelectBlock;

- (void)updateWithAssetInfoModels:(id)a0;
- (Class)getCellClass:(id)a0;
- (double)getCellHeight:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

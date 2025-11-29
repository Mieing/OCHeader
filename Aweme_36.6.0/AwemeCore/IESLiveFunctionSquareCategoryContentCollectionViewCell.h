@class NSString, NSMutableArray, UITableView;
@protocol IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate;

@interface IESLiveFunctionSquareCategoryContentCollectionViewCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, IESLiveFunctionSquareCategoryContentTableViewCellDelegate>

@property (nonatomic) BOOL isBeforeLive;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (weak, nonatomic) id<IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL tableViewCanScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)categoryContentTableViewCellClass;
+ (id)reuseIdentifier;

- (void)tableViewDidClickItem:(id)a0;
- (void)tableViewDidClickDebugButtonWithItem:(id)a0;
- (void)updateContentDataSource:(id)a0 isBeforeLive:(BOOL)a1;
- (void)updateTableViewCanScroll:(BOOL)a0;
- (id)getCurrentVisibleRowNodes;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)setupUI;

@end

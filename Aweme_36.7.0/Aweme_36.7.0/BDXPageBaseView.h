@class NSArray, BDXCategoryBaseView, NSString;
@protocol BDXCategoryViewListContainer, BDXPageBaseViewDelegate;

@interface BDXPageBaseView : UIView <BDXCategoryViewDelegate, BDXCategoryListContainerViewDelegate>

@property (nonatomic) BOOL viewDidLoad;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) BDXCategoryBaseView *categoryView;
@property (retain, nonatomic) id<BDXCategoryViewListContainer> listContainerView;
@property (nonatomic) double categoryViewHeight;
@property (weak, nonatomic) id<BDXPageBaseViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)categoryView:(id)a0 didSelectedItemAtIndex:(long long)a1;
- (void)categoryView:(id)a0 didClickSelectedItemAtIndex:(long long)a1;
- (void)categoryView:(id)a0 didScrollSelectedItemAtIndex:(long long)a1;
- (void)categoryView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)categoryView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)numberOfListsInlistContainerView:(id)a0;
- (void)listContainerViewDidScroll:(id)a0;
- (id)listContainerView:(id)a0 initListForIndex:(long long)a1;
- (double)preferredCategoryViewHeight;
- (id)preferredCategoryView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)loadView;

@end

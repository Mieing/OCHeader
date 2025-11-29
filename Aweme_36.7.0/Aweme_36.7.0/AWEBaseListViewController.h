@class NSString, AWEBaseListViewHolder, AWEBaseListViewModel;

@interface AWEBaseListViewController : UIViewController <BDVListEventProtocol, AWEBaseListContainerContext, AWEBaseListViewControllerOverride>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEBaseListViewHolder *viewHolder;
@property (retain, nonatomic) AWEBaseListViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)collectionViewClass;
+ (Class)viewHolderClass;

- (void)applyBlurEffectIfNeeded;
- (void)setupViewModel;
- (void)setupViewHolder;
- (id)sectionViewModels;
- (id)bdv_visibleManager;
- (void)setDisableContentOffsetRestorationAnchor:(BOOL)a0;
- (id)erasedToAny;
- (void)reloadContainer:(BOOL)a0;
- (void)updateContainer:(BOOL)a0 sync:(BOOL)a1;
- (id)bdv_itemIDForCell:(id)a0 indexPath:(id)a1;
- (void)bdv_cellDidVisible:(id)a0 indexPath:(id)a1 metaData:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView;

@end

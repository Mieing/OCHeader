@class AWEComposerBeautyViewModel, NSArray, UICollectionView, NSString, AWEComposerBeautyEffectCategoryWrapper;
@protocol AWEComposerBeautyPrimaryItemsViewControllerDelegate, ACCBeautyUIConfigProtocol;

@interface AWEComposerBeautyPrimaryItemsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) id<ACCBeautyUIConfigProtocol> uiConfig;
@property (retain, nonatomic) AWEComposerBeautyViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *selectedChildCategory;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *currentCategory;
@property (readonly, nonatomic) NSArray *childCategories;
@property (retain, nonatomic) NSArray *categoriesInCollection;
@property (weak, nonatomic) id<AWEComposerBeautyPrimaryItemsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIConfig:(id)a0;
- (void)reloadPanel;
- (id)initWithViewModel:(id)a0 PrimaryCategory:(id)a1 selectedChildCategory:(id)a2;
- (void)updateWithViewModel:(id)a0 PrimaryCategory:(id)a1 selectedChildCategory:(id)a2;
- (id)firstLoadDefaultCategory:(id)a0;
- (void)handleSelectEffectCategoryWrapper:(id)a0 atIndexPath:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end

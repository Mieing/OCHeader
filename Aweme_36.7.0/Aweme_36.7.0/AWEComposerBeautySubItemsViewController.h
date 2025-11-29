@class AWEComposerBeautyEffectWrapper, NSString, UICollectionView, NSArray, AWEComposerBeautyViewModel, AWEComposerBeautyEffectCategoryWrapper, AWEComposerBeautySwitchCollectionViewCell;
@protocol AWEComposerBeautySubItemsViewControllerDelegate, ACCBeautyUIConfigProtocol;

@interface AWEComposerBeautySubItemsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSString *parentItemID;
@property (weak, nonatomic) AWEComposerBeautyEffectCategoryWrapper *parentCategoryWrapper;
@property (weak, nonatomic) AWEComposerBeautyEffectWrapper *parentEffectWrapper;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *effectWrappers;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *selectedEffect;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *candidateEffect;
@property (retain, nonatomic) id<ACCBeautyUIConfigProtocol> uiConfig;
@property (retain, nonatomic) AWEComposerBeautyViewModel *viewModel;
@property (nonatomic) BOOL shouldShowAppliedIndicator;
@property (nonatomic) BOOL hadAutoScroll;
@property (nonatomic) BOOL isOnShootPage;
@property (retain, nonatomic) AWEComposerBeautySwitchCollectionViewCell *switchCell;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *resetPlaceHolderWrapper;
@property (weak, nonatomic) id<AWEComposerBeautySubItemsViewControllerDelegate> delegate;
@property (nonatomic) BOOL exclusive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIConfig:(id)a0;
- (void)reloadPanel;
- (void)handleEffectDownloadStatusChange:(id)a0;
- (BOOL)enableBeautyCategorySwitch;
- (void)reloadCurrentItem;
- (void)setShouldShowAppliedIndicatorForAllCells:(BOOL)a0;
- (void)reloadBeautySubItemsViewIfIsOn:(BOOL)a0 changedByUser:(BOOL)a1;
- (void)updateResetModeButton;
- (id)initWithViewModel:(id)a0 parentCategory:(id)a1 OrParentEffect:(id)a2;
- (void)updateWithParentCategory:(id)a0 OrParentEffect:(id)a1;
- (void)updateWithEffectWrappers:(id)a0 parentItemID:(id)a1 selectedEffect:(id)a2 exclusive:(BOOL)a3;
- (BOOL)enableBeautyCategoryResetMode;
- (id)cellForEffectWrapper:(id)a0;
- (void)handleSelectEffectWrapper:(id)a0 atIndexPath:(id)a1 fromDownload:(BOOL)a2;
- (BOOL)appliedStatusForEffectWrapper:(id)a0;
- (id)indexPathForEffect:(id)a0;
- (void)didTapBeautyCategorySwitchCell;
- (void)didTapBeautyCategoryResetCell;
- (void)deselectEffectWrapper:(id)a0;
- (void)updateStatusForDownloadedEffectWrapper:(id)a0;
- (void)selectEffectWrapper:(id)a0;
- (id)initWithEffectWrappers:(id)a0 viewModel:(id)a1 parentItemID:(id)a2 selectedEffect:(id)a3 exclusive:(BOOL)a4;
- (id)cellForSwitchButton:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (double)itemWidth;

@end

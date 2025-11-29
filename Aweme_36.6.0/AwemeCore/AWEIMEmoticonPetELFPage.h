@class NSObject, AWEIMEmoticonThemeModel, AWEIMEmoticonCollectionListModel, NSMutableSet, NSString, AWEIMEmoticonPanelContext, UICollectionViewCell;
@protocol AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonInfoModelProtocol;

@interface AWEIMEmoticonPetELFPage : AWEIMEmoticonBasePage <AWEIMEmoticonPanelPage>

@property (nonatomic) BOOL isRefreshing;
@property (weak, nonatomic) AWEIMEmoticonPanelContext *context;
@property (readonly, nonatomic) unsigned long long pageType;
@property (readonly, nonatomic) unsigned long long pageState;
@property (retain, nonatomic) NSObject<AWEIMEmoticonInfoModelProtocol> *emoticonInfoModel;
@property (weak, nonatomic) UICollectionViewCell<AWEIMEmoticonPanelPageCollectionViewCell> *panelCell;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL didDisplayed;
@property (readonly, nonatomic) NSMutableSet *trackedEmoticonShowedIDs;
@property (retain, nonatomic) AWEIMEmoticonCollectionListModel *listModel;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (readonly, nonatomic) BOOL needsReloadViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowInEmoticonTabWithContext:(id)a0;
+ (id)themeInfoModelWithContext:(id)a0;

- (void)p_refreshData:(id)a0;
- (void)configTabCollectionViewCell:(id)a0;
- (void)configPanelCollectionViewCell:(id)a0;
- (id)viewModelWithEmoticonModel:(id)a0 themeModel:(id)a1 placeholder:(id)a2;
- (id)panelCellReuseIdentifier;
- (void)registerPanelCollectionView:(id)a0;
- (BOOL)canBePreloaded;
- (void)willDisplayPanelCell:(id)a0;
- (void)emoticonViewDidAppear;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 emoticonViewModel:(id)a2;
- (void)refreshPetELFIfNeeded;
- (void)updateCollectionViewWithStickers:(id)a0;
- (void)requestLoadingPetELFDataCount:(long long)a0 context:(id)a1;
- (void)requestPetELFDataWithContext:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;

@end

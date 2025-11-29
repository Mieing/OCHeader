@class AWEIMEmoticonCollectionListModel, NSString, AWEIMEmoticonModel, AWEIMEmoticonThemeModel, NSMutableSet, NSObject, UICollectionViewCell, AWEIMEmoticonPanelContext;
@protocol AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonInfoModelProtocol;

@interface AWEIMEmoticonDomesticGiphyPage : AWEIMEmoticonBasePage <AWEIMEmoticonPanelPage>

@property (retain, nonatomic) AWEIMEmoticonModel *lastFirstModel;
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

- (void)configTabCollectionViewCell:(id)a0;
- (void)configPanelCollectionViewCell:(id)a0;
- (id)viewModelWithEmoticonModel:(id)a0 themeModel:(id)a1 placeholder:(id)a2;
- (void)reloadViewModelIfNeeded;
- (void)willDisplayPanelCell:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 emoticonViewModel:(id)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)requestData;
- (void)dealloc;

@end

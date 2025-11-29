@class AWEIMEmoticonThemeModel, UICollectionViewCell, AWEIMEmoticonCollectionListModel, NSMutableSet, NSString, AWEIMEmoticonPanelContext, NSObject;
@protocol AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonTrackComponent, AWEIMEmoticonInfoModelProtocol;

@interface AWEIMEmoticonCustomGiphyPage : AWEIMEmoticonBasePage <AWEIMEmoticonPanelPage>

@property (weak, nonatomic) id<AWEIMEmoticonTrackComponent> trackerService;
@property (nonatomic) BOOL didFirstAppear;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *recommendThemeModel;
@property (nonatomic) double startDragOffset;
@property (nonatomic) BOOL hasTrackedRecEmojiShow;
@property (nonatomic) BOOL enableRecEmoji;
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
- (id)panelCellReuseIdentifier;
- (void)registerPanelCollectionView:(id)a0;
- (void)reloadViewModelIfNeeded;
- (void)trackPageDidSelectedWithEnterMethod:(id)a0;
- (void)willDisplayPanelCell:(id)a0;
- (id)themeModelForIndexPath:(id)a0;
- (void)emoticonViewDidAppear;
- (BOOL)canPreviewEmoticonAtIndexPath:(id)a0;
- (void)initialCreateListModel;
- (void)p_loadRecommendEmojiIfNeeded;
- (BOOL)p_shouldShowAdd;
- (void)p_closeRecEmoji;
- (void)p_trackRecEmojiShowIfNeeded;
- (void)p_trackRecEmojiActionIfNeededWithActionType:(id)a0;
- (void)p_updateRecEmojis:(id)a0 themeModel:(id)a1;
- (id)p_exitTimeKeyOfCurrentUser;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)requestData;

@end

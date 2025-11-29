@class NSObject, AWEIMEmoticonThemeModel, AWEIMEmoticonCollectionListModel, NSMutableSet, NSString, AWEIMEmoticonPanelContext, UICollectionViewCell;
@protocol AWEIMEmoticonInfoModelProtocol, AWEIMEmoticonPanelPageCollectionViewCell, AFDFrequencyCountRuleProtocol;

@interface AWEIMEmoticonAudioEmojiPage : AWEIMEmoticonBasePage <AWEIMEmoticonPanelPage>

@property (retain, nonatomic) id<AFDFrequencyCountRuleProtocol> redDotShowRule;
@property (retain, nonatomic) id<AFDFrequencyCountRuleProtocol> redDotSelectRule;
@property (nonatomic) BOOL didCountRedDotShow;
@property (nonatomic) BOOL needGuideDot;
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

- (void)addShowCount;
- (void)configTabCollectionViewCell:(id)a0;
- (void)configPanelCollectionViewCell:(id)a0;
- (id)viewModelWithEmoticonModel:(id)a0 themeModel:(id)a1 placeholder:(id)a2;
- (void)reloadViewModelIfNeeded;
- (void)willDisplayPanelCell:(id)a0;
- (void)didEndDisplayingPanelCell:(id)a0;
- (void)containerViewDidChangeHidden:(BOOL)a0;
- (void)tabCellWillDisplayWithTabCell:(id)a0 isByContainerHidden:(BOOL)a1;
- (BOOL)redDotShowAvailable;
- (void)addSelectCount;
- (void)p_stopAllAudioPlay;
- (void)p_addCountForPrefix:(id)a0;
- (long long)p_countForPrefix:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)init;
- (void)requestData;

@end

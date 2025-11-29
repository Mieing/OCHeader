@class NSObject, AWEIMEmoticonThemeModel, AWEIMEmoticonCollectionListModel, NSMutableSet, NSString, AWEIMEmoticonPanelContext, UICollectionViewCell;
@protocol AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonInfoModelProtocol;

@interface AWEIMEmoticonSearchPage : AWEIMEmoticonBasePage <AWEIMEmoticonPanelPage>

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
- (void)didSelectedTab;
- (void)reloadViewModelIfNeeded;

@end

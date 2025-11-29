@class AWEIMUser, NSString, UICollectionView, NSMutableSet, UIView, NSMutableArray, UILabel;
@protocol IESIMConversationProtocol;

@interface AWEIMChatChangeBgViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWEIMHalfScreenContainerScrollProtocol, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *autoSyncSwitchView;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) UILabel *closeLabel;
@property (retain, nonatomic) UILabel *headerLabel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentUsedBgURI;
@property (copy, nonatomic) NSString *currentUsedBgOid;
@property (nonatomic) BOOL notDirectSetBackground;
@property (copy, nonatomic) NSString *chatThemeModelKey;
@property (copy, nonatomic) NSString *previewThemeOid;
@property (nonatomic) BOOL isNewBackgroundSetting;
@property (nonatomic) BOOL canTrackBackgroundShow;
@property (retain, nonatomic) NSMutableSet *hasTrackShowSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (double)externalAssignTopDragHeight;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)p_setupData;
- (BOOL)dismissGestureRecognizerShouldBegin;
- (void)p_createCollectionView;
- (void)p_createNaviBar;
- (void)p_closeBtnDidClicked:(id)a0;
- (void)p_trackWithEvent:(id)a0 otherParams:(id)a1;
- (void)p_trackNewBackgroundWithEvent:(id)a0 otherParams:(id)a1;
- (void)p_createTopAlbumHeaderCell;
- (void)p_showAutoSyncSwitchViewIfNeeded;
- (void)p_trackChatBackgroudViewShowOnce;
- (void)p_transferToAlbum;
- (void)p_transferToPreviewPageWithSelectAsset:(id)a0;
- (void)p_transferToPreviewVC:(id)a0;
- (void)p_trackPopViewAction:(id)a0;
- (BOOL)p_isAbleToDisplayAutoSyncEntrence;
- (void)p_changeAutoSyncBgSwitch;
- (void)p_transferToPreviewPageWithSelectModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)scrollView;
- (void)viewDidLoad;
- (void)loadView;

@end

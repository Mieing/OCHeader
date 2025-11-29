@class NSString, CContact, UICollectionView, NSMutableArray, ChatRoomToolLastUseWeAppLogic;
@protocol ChatRoomToolViewControllerDelegate;

@interface ChatRoomToolViewController : MMUIHalfScreenViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ChatRoomToolWeAppSelectViewControllerDelegate, IMsgExt, WCActionSheetDelegate, ChatRoomToolLastUseWeAppLogicDelegate, IChatRoomToolMgrExt> {
    NSMutableArray *m_toolWeAppAr;
    NSMutableArray *m_latestUseInGroupWeAppAr;
    ChatRoomToolLastUseWeAppLogic *m_lastUseWeAppLogic;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (nonatomic) BOOL isShowInPageSheetMode;
@property (weak, nonatomic) id<ChatRoomToolViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)init;
- (void)initRegister;
- (void)initData;
- (void)reloadView;
- (double)getContentMargin;
- (double)getSessionContentMargin;
- (void)initCollectionView;
- (void)reloadCollection;
- (BOOL)isShowEmptyCell;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didSelectChatRoomToolWeAppAddAction;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)didUpdateSelectWeAppList:(id)a0;
- (void)onLoadWeAppLogicReloadTableWithWeAppList:(id)a0;
- (void)onChangeChatRoomToolWeAppListWithUserName:(id)a0;
- (void).cxx_destruct;

@end

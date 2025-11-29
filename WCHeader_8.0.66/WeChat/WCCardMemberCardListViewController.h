@class ShareMessageConfirmLogicHelper, NSString, WCCardCollectionView, WCCardMemberCardListLogicController, UIScrollView, WCCardEmptyBackView, UICollectionViewFlowLayout;

@interface WCCardMemberCardListViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, IMemberCardListLogicExt>

@property (retain, nonatomic) WCCardCollectionView *collectionView;
@property (retain, nonatomic) UIScrollView *emptyScrollView;
@property (retain, nonatomic) WCCardEmptyBackView *emptyBackView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) WCCardMemberCardListLogicController *logicViewController;
@property (retain, nonatomic) ShareMessageConfirmLogicHelper *sendAppMsgHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)confiView;
- (void)confiNavigationBar;
- (void)confiData;
- (void)onGiftToFriendWithIndexPath:(id)a0;
- (void)reloadCollectionView;
- (void)onBackDidSelected;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)OnSendMessageOK:(id)a0;
- (void)onDeleteCard:(id)a0;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)delayFadeOutCard:(id)a0;
- (void)memberCardListLogicUpdateMemberCard:(id)a0 atIdx:(unsigned long long)a1;
- (void).cxx_destruct;

@end

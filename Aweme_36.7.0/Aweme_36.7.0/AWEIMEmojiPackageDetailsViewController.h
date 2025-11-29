@class AWEIMEmojiPackageDetailInfo, UIView, AWEIMEmojiPackageDetailsHeader, AWEIMEmoticonPreviewV2, NSString, UIButton, NSDictionary, UICollectionView, NSNumber;

@interface AWEIMEmojiPackageDetailsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMEmojiPackageDetailsHeaderDelegate, UIGestureRecognizerDelegate, AWEIMEmoticonPreviewDelegateProtocol, IESIMEmojiPackageDetailsViewControllerProtocol>

@property (retain, nonatomic) UICollectionView *detailsCollection;
@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) AWEIMEmojiPackageDetailInfo *packageDetail;
@property (weak, nonatomic) AWEIMEmojiPackageDetailsHeader *packageHeader;
@property (retain, nonatomic) AWEIMEmoticonPreviewV2 *preview;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (copy, nonatomic) NSNumber *emojiPackageId;
@property (copy, nonatomic) NSNumber *stickerType;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *imBizTrackCommonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupUI;
- (void)hidePreview;
- (void)__populateData;
- (void)__didClickBack;
- (void)__resetEmptyBackgroundTipView;
- (void)__refreshAddButtonUI;
- (void)__didClickAdd;
- (void)emojiPackageDetailsHeaderDidClickAddPackage:(id)a0;
- (void)emojiPackageDetailsHeaderDidClickAuthor:(id)a0 isSubscribe:(BOOL)a1 authorArray:(id)a2;
- (void)__packageDidChangeInstallStatusNotification:(id)a0;
- (void)__dimissEmojiPreview;
- (void)__dispalyPackageDetails;
- (void)__resetOfflineTipView;
- (id)__emotionModelOfEmojiPackageDetailsCollectionViewCell:(id)a0;
- (void)__didClickShare;
- (void)tapToDismissPreviewGesHandler:(id)a0;
- (void)__showPreviewEmojiOnCell:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end

@class UIView, NSString, UICollectionViewFlowLayout, MultiSelectContactsViewController, ElderModeViewController, UIButton, UICollectionView, RichTextView, MMUILabel, QuickCallLogic;

@interface QuickCallViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MultiSelectContactsViewControllerDelegate, QuickCallRemoveViewControllerDelegate, ElderModeExt, ILinkEventExt, QuickCallLogicDelegate>

@property (retain, nonatomic) QuickCallLogic *logic;
@property (nonatomic) BOOL enableJumpToElderMode;
@property (nonatomic) double footerViewHeight;
@property (nonatomic) BOOL hasShowEducation;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *emptyTipsLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *addContactButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) RichTextView *elderModeTipsView;
@property (retain, nonatomic) MultiSelectContactsViewController *selectContactVC;
@property (retain, nonatomic) ElderModeViewController *elderModeVC;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnableJumpToElderMode:(BOOL)a0;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)viewDidAppear:(BOOL)a0;
- (void)initElderModeContent;
- (void)initQuickCallContent;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initUI;
- (void)initLayout;
- (void)viewDidLayoutSubviews;
- (void)updateContent;
- (void)checkShowEducation;
- (double)collectionContentHeight;
- (void)onSetElderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)onSetSpecialRenderModeOn:(BOOL)a0 success:(BOOL)a1;
- (void)handleRedirectToQuickCallViewController;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)onRemoveContactsDone:(id)a0;
- (void)onQuickCallContactsUpdate;
- (void)showMultiSelectContacts;
- (void)onAddContactButtonClick:(id)a0;
- (void)onEditButtonClick:(id)a0;
- (void).cxx_destruct;

@end

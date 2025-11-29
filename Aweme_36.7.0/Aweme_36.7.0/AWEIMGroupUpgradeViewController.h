@class AWEIMMessageConversation, NSString, UICollectionView, AWEIMGroupUpgradeViewModel, UIView, RxCollectionViewDiffableDataSource, AWEIMGroupUpgradeConfirmButtonView;
@protocol IESIMLoadingViewProtocol, IESIMVacantViewProtocol;

@interface AWEIMGroupUpgradeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEIMGroupUpgradeConfirmButtonViewModelDelegate>

@property (retain, nonatomic) AWEIMGroupUpgradeViewModel *viewModel;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long pageUIStandard;
@property (retain, nonatomic) AWEIMGroupUpgradeConfirmButtonView *confirmView;
@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *vacantView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL haveTracked;
@property (nonatomic) BOOL isForcedDisableConfirmBtn;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickConfirmButton:(id)a0 button:(id)a1;
- (void)didClickLeftButton:(id)a0 button:(id)a1;
- (void)__setupUI;
- (void)onAWEUIThemeChangeNotification;
- (void)__backBtnClicked;
- (void)p_trackButtonClick:(id)a0;
- (id)p_trackCommonParams;
- (void)__confirmAction;
- (void)__setupDataSource;
- (void)__back;
- (void)__applySnapshotWithAnimatingDifferences:(BOOL)a0;
- (void)p_showEmptyPageWithPageState:(unsigned long long)a0;
- (void)__fetchDataWithPageStatusEnable:(BOOL)a0;
- (void)__refreshConfirmViewFrame;
- (void)__updateConfirmViewUI;
- (void)p_trackChatUpgradeEnterEvent;
- (void)p_setBackgroundColor;
- (void)__setupNaviBar;
- (void)p_refreshVacantView;
- (void)p_trackGroupScaleUpgradePopup:(id)a0 isShowDetail:(id)a1;
- (void)p_showViolationAlert:(id)a0 subTitle:(id)a1 confirmBtnText:(id)a2 landingBtnText:(id)a3 landingSchema:(id)a4;
- (void)p_createVacantViewIfNeeded;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;

@end

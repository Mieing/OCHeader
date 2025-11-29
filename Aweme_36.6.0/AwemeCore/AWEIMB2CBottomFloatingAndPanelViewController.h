@class UIView, AWEIMB2CSmartAssistantFullScreenView, NSArray, NSString, UIImageView, UIButton, AWEIMB2CBottomFloatingAndPanelViewConfig, UIViewController, UICollectionView, UILabel, CAGradientLayer;
@protocol AWEIMB2CBottomFloatingAndPanelViewControllerDelegate, IESIMSheetVCProtocol, IESIMThrottleDebounceAction;

@interface AWEIMB2CBottomFloatingAndPanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMB2CSmartAssistantIntroductionViewControllerDelegate, AWEIMInAppPushProtocol, AWEIMB2CSmartAssistantFullScreenViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bottomFloatingView;
@property (weak, nonatomic) UIViewController<IESIMSheetVCProtocol> *sheet;
@property (weak, nonatomic) UIViewController<IESIMSheetVCProtocol> *introductionSheet;
@property (retain, nonatomic) AWEIMB2CBottomFloatingAndPanelViewConfig *config;
@property (retain, nonatomic) UIView *panelTitleContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> debounceTimer;
@property (retain, nonatomic) AWEIMB2CSmartAssistantFullScreenView *fullView;
@property (copy, nonatomic) NSArray *cellViewModels;
@property (weak, nonatomic) id<AWEIMB2CBottomFloatingAndPanelViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL floatingViewIsDisplaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowInnerPush;
- (void)__setupUI;
- (void)scrollViewDidEndDragging;
- (void)scrollViewWillBeginDragging;
- (void)dismissPanel;
- (void)handleThemeDidChangeNoti:(id)a0;
- (void)destroyDebounceTimer;
- (void)destroyFullScreenView;
- (void)beginDebounceTimer;
- (double)__panelHeight;
- (void)setUpCommonBottomViewAndFloadInputViewFrame;
- (void)setupNewPanelLayout;
- (void)debounceDismissTimer;
- (void)addFullScreenView;
- (double)__collectionViewHeight;
- (void)refreshBottomFloatingViewWithBackgroundImage:(BOOL)a0;
- (double)panelCollectionViewMaxHeight;
- (void)__didClickOnCloseBtn:(id)a0;
- (void)touchFullScreenViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCellViewModels:(id)a0 config:(id)a1;
- (id)constructBottomFloatingView;
- (void)bottomFloatingViewRemoveFromSuperview;
- (void)showPanelWithDelegate:(id)a0;
- (double)floatingViewHeight;
- (void)refreshWithCellViewModels:(id)a0;
- (void)__didClickOnIconView;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)dismissViewController;

@end

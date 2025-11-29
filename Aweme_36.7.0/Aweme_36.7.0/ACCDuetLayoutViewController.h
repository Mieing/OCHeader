@class NSIndexPath, NSString, UICollectionView, UILabel, UIView, UIButton;
@protocol ACCLoadingViewProtocol, ACCDuetLayoutViewControllerDelegate;

@interface ACCDuetLayoutViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *netErrorRetryContainerView;
@property (retain, nonatomic) UILabel *netErrorTipsLabel;
@property (retain, nonatomic) UIButton *netErrorRetryButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL hasSelected;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *previousSelectedIndexPath;
@property (retain, nonatomic) UIButton *cameraButton;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (weak, nonatomic) id<ACCDuetLayoutViewControllerDelegate> delegate;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) long long firstTimeSelectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)p_showLoadingView;
- (void)p_dismiss;
- (void)showNetErrorView;
- (void)hideNetErrorView;
- (void)p_clearSeletedCellExcept:(id)a0;
- (void)p_selectAndDownloadEffectAtIndexPath:(id)a0;
- (void)resetSelectedIndex;
- (void)p_selectWithCell:(id)a0 model:(id)a1 indexPath:(id)a2;
- (id)duetLayoutModels;
- (void)forceSelectFirstLayoutIfNeeded;
- (void)enableSwappedCameraButton:(BOOL)a0;
- (void)backviewTaped:(id)a0;
- (void)setupCameraButton;
- (void)p_hiddenLoadingView;
- (void)p_showOnView:(id)a0 fromOffset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 duration:(double)a3;
- (id)duetLayoutModelAtIndex:(long long)a0;
- (void)p_dismissWithAnimated:(BOOL)a0 duration:(double)a1;
- (void)p_shouldShowCameraButton:(BOOL)a0;
- (void)p_moveToOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)didTapOnRetryButton:(id)a0;
- (void)didTapOnSwitchButton:(id)a0;
- (void)cameraButtonPressed:(id)a0;
- (void)p_updateSwitchButton;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)shouldAutorotate;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)didTapBackButton:(id)a0;

@end

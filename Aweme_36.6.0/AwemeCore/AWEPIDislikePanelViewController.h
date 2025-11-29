@class AWEAwemeModel, UIView, NSArray, NSString, AWEDislikePanelVideoInfoView, NSDictionary, AWEDislikePanelBottomView, CAGradientLayer, UICollectionView, AWEDislikePanelLoadingView;
@protocol AWEPIDislikePanelVCDelegate;

@interface AWEPIDislikePanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEDislikeInputViewCellDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSArray *dimensions;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEDislikePanelVideoInfoView *topVideoInfoView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEDislikePanelBottomView *dislikeBottomView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientView;
@property (retain, nonatomic) CAGradientLayer *topGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic) struct CGSize { double width; double height; } lastKeyboardSize;
@property (retain, nonatomic) AWEDislikePanelLoadingView *loadingView;
@property (weak, nonatomic) id<AWEPIDislikePanelVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubviews;
- (void)didClickCancelButton;
- (void)didClickCloseButton;
- (void)textViewDidChangeText:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (void)shouldReloadCell:(id)a0 indexPath:(id)a1;
- (void)keyboardWillShow:(struct CGSize { double x0; double x1; })a0 cell:(id)a1 indexPath:(id)a2;
- (void)keyboardWillShowWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0 cell:(id)a1 indexPath:(id)a2;
- (void)keyboardDidShow:(struct CGSize { double x0; double x1; })a0 cell:(id)a1 indexPath:(id)a2;
- (void)keyboardWillChangeFrame:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)keyboardWillChangeFrameWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)keyboardDidChangeFrame:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)keyboardWillHide:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)keyboardWillHideWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)keyboardDidHide:(struct CGSize { double x0; double x1; })a0 cell:(id)a1;
- (void)hideLine:(BOOL)a0;
- (void)configVideoImage:(id)a0;
- (void)changeBottomGradientViewStatus;
- (void)changeTopGradientViewStatus;
- (void)changeCellStatus:(BOOL)a0 collectionView:(id)a1 indexPath:(id)a2;
- (BOOL)enableContentDimensionSingleChoice;
- (void)changeBottomViewStatus;
- (void)didClickSubmitButton;
- (id)initWithData:(id)a0 model:(id)a1 trackExtra:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)startLoading;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)updateWithData:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)setupUI;
- (double)viewHeight;

@end

@class UIView, NSString, NSArray, UIImage, UITapGestureRecognizer, UIImageView, UIButton, NSMutableArray, UICollectionView, MMUILabel, MMUIButton, UIPanGestureRecognizer;
@protocol EmoticonCustomManageSelectFromMultiImageViewControllerDelegate;

@interface EmoticonCustomManageSelectFromMultiImageViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImage *placeHolderImage;
@property (retain, nonatomic) NSArray *mediaInfos;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) double cellViewWidth;
@property (nonatomic) BOOL allMediaDownloaded;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *imgPreviewView;
@property (retain, nonatomic) UICollectionView *imgPreviewCollectionView;
@property (retain, nonatomic) NSMutableArray *cellViews;
@property (retain, nonatomic) UIView *cellViewInteractiveView;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeSelectGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapSelectGesture;
@property (weak, nonatomic) id<EmoticonCustomManageSelectFromMultiImageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMediaInfos:(id)a0 placeHolderImageData:(id)a1;
- (void)viewDidLoad;
- (id)progressViewX;
- (void)bringBtnsToFront;
- (void)viewDidTransitionToNewSize;
- (void)onAllMediaDownloaded;
- (void)initViews;
- (void)genCellViews;
- (id)getImageDataFromMediaInfo:(id)a0;
- (void)createOrUpdataLayout;
- (void)viewWillLayoutSubviews;
- (void)genCellViewWidth;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)onSwipeSelectGesure:(id)a0;
- (void)doTaptic:(long long)a0;
- (void)onTapCancel;
- (void)onTapNext;
- (void).cxx_destruct;

@end

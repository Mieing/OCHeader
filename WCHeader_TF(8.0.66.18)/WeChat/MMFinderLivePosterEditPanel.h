@class MMUIImageView, NSString, UICollectionView, MMFinderLiveNoticePosterModel, MMUIButton;
@protocol MMFinderLivePosterEditPanelDelegate;

@interface MMFinderLivePosterEditPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MMUIImageView *editingStyleImageView;
@property (retain, nonatomic) MMUIImageView *editingPictureImageView;
@property (retain, nonatomic) MMUIButton *editingCommitButton;
@property (retain, nonatomic) UICollectionView *colorVariantCollectionView;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<MMFinderLivePosterEditPanelDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)onActionSheetDismiss;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)initViews;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onEditStyleButtonTapped;
- (void)onEditImageButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void).cxx_destruct;

@end

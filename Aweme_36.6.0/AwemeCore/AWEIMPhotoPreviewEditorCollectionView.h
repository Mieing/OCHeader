@class NSString, UICollectionView, UIView, UICollectionViewFlowLayout, AWEIMPhotoPickerModel;
@protocol AWEIMPhotoPreviewEditorCollectionViewDelegate;

@interface AWEIMPhotoPreviewEditorCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bottomView;
@property (weak, nonatomic) AWEIMPhotoPickerModel *pickerModel;
@property (retain, nonatomic) NSString *currentIdentifier;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (weak, nonatomic) id<AWEIMPhotoPreviewEditorCollectionViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (nonatomic) BOOL disableSendWatchOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)setBottomBackgroundColor:(id)a0;
- (void)longPressGestureAction:(id)a0;
- (id)initWithPickerModel:(id)a0;
- (void)pickerModelChanged:(id)a0;
- (void)setDisplayingIdentifier:(id)a0;
- (id)initWithPickerModel:(id)a0 layout:(id)a1;
- (void)deleteButtonPressed:(id)a0;
- (void)p_updateSelectedState:(id)a0 indexPath:(id)a1;
- (void)didSelectedActionWithRow:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end

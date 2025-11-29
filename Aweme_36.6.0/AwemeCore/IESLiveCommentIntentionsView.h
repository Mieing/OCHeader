@class IESLiveCommentIntentionsViewModel, NSString, UICollectionView;
@protocol IESLiveCommentIntentionsViewDelegate;

@interface IESLiveCommentIntentionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCommentIntentionsViewCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveCommentIntentionsViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveCommentIntentionsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshIntentionEntries;
- (void)hideIntentions;
- (void)didSelectEntryModel:(id)a0 fusionEmoji:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupViews;

@end

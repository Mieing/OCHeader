@class IESLiveCommentMentionListViewModel, NSString, UICollectionView;
@protocol IESLiveCommentMentionListViewDelegate;

@interface IESLiveCommentMentionListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveCommentMentionListViewModel *viewModel;
@property (nonatomic) BOOL displaying;
@property (nonatomic) BOOL displayAnimating;
@property (weak, nonatomic) id<IESLiveCommentMentionListViewDelegate> delegate;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithSearchWord:(id)a0 skipReqRate:(BOOL)a1;
- (void)showMentionListIfNeeded;
- (void)deselectUsers:(id)a0;
- (void)refreshWithSearchWord:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)hide;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (void)setupView;

@end

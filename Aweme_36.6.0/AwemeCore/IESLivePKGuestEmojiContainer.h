@class IESLiveWebpLoadingView, UIView, NSArray, NSString, IESLivePKGuestOperatePanelViewModel, UICollectionView, HTSPageControl, UILabel, NSIndexPath;

@interface IESLivePKGuestEmojiContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLivePKGuestEmojiPageCellDelegate>

@property (retain, nonatomic) IESLivePKGuestOperatePanelViewModel *viewModel;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (copy, nonatomic) NSArray *emojiPages;
@property (retain, nonatomic) UIView *emojiContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) HTSPageControl *pageControl;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UILabel *sendTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectEmoji:(id)a0;
- (double)renderEmojiList;
- (void)hideAllIfNeeded;
- (id)getErrorLabel;
- (void)removeErrorViewIfNeeded;
- (void)removeLoadingViewIfNeeded;
- (void)didShowEmoji:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)binding;
- (void)setupViews;
- (void)showLoadingView;
- (void)showErrorView;
- (void)showCollectionView;

@end

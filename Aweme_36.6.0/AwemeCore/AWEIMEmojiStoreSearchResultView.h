@class NSString, AWEIMEmoticonPreviewV2, AWEIMEmojiStoreSearchResultDataSource, UICollectionView, NSDictionary;
@protocol AWEIMEmojiStoreSearchResultViewDelegate;

@interface AWEIMEmojiStoreSearchResultView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWEIMEmoticonPreviewDelegateProtocol>

@property (retain, nonatomic) AWEIMEmoticonPreviewV2 *preview;
@property (retain, nonatomic) AWEIMEmojiStoreSearchResultDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *emojiCollectionView;
@property (weak, nonatomic) id<AWEIMEmojiStoreSearchResultViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)hidePreview;
- (void)tapToDismissPreviewGesHandler:(id)a0;
- (void)renderWithDataSource:(id)a0;
- (id)emotionModelOfEmojiPackageDetailsCollectionViewCell:(id)a0;
- (void)dismissEmojiPreview;
- (void)showPreviewEmojiOnCell:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)setupLayout;

@end

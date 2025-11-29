@class NSString, UIImage, UIView, AWEListenFeedBgImageCollectionView;

@interface AWEListenFeedBackgroundElement : AWEListenFeedInteractionBaseElement <AWEListenFeedBgImageCollectionViewDelegate, AWEListenFeedBgImageCollectionViewDataSource>

@property (retain, nonatomic) AWEListenFeedBgImageCollectionView *bgImageCollectionView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (retain, nonatomic) UIView *maskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConnectionChanged:(id)a0;
- (void)updateWithModel:(id)a0 playModel:(id)a1 extendModelArray:(id)a2 mixVideoModel:(id)a3 currentModelIndex:(long long)a4 context:(id)a5;
- (void)updateWithModel:(id)a0 playModel:(id)a1 context:(id)a2;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollDidEnd;
- (void)bgImageColletionView:(id)a0 didScrollFromIndex:(long long)a1 toIndex:(long long)a2;
- (long long)bgImageColletionViewNumberOfItems:(id)a0;
- (id)bgImageColletionView:(id)a0 cellForIndexPath:(id)a1;
- (void)extendModelArrayDidUpdate;
- (void)prepareForReuseVC;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end

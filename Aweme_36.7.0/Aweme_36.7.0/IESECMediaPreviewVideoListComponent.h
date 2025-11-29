@class NSArray, UICollectionView, NSString, UIView;
@protocol IESECMediaPreviewSelectMoreVideosComponentDelegate;

@interface IESECMediaPreviewVideoListComponent : IESECMediaPreviewBaseComponent <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) long long currentPlayIndex;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECMediaPreviewSelectMoreVideosComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewViewDidLoad;
- (void)previewScrollViewIsScrollingWithCurIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)previewDidStartTransiting;
- (void)previewDidEndTransiting:(BOOL)a0 index:(long long)a1;
- (void)tapShowAllVideos:(BOOL)a0;
- (void)updateRequest:(id)a0;
- (void)updateSelectedCell:(unsigned long long)a0;
- (void)trackVideoListShow;
- (void)trackVideoItemWithIndex:(unsigned long long)a0 eventName:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)didTapCell:(id)a0;

@end

@class NSArray, WCAdBrandTopicListCollectionView, NSString;
@protocol WCAdBrandTopicListViewDelegate;

@interface WCAdBrandTopicListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *topicInfoList;
@property (nonatomic) double topicCornerRadius;
@property (weak, nonatomic) id<WCAdBrandTopicListViewDelegate> delegate;
@property (retain, nonatomic) WCAdBrandTopicListCollectionView *topicListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topicInfoList:(id)a1 cornerRadius:(double)a2;
- (void)generateSubviews;
- (id)collectionLayout;
- (void)scrollViewDidScroll:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

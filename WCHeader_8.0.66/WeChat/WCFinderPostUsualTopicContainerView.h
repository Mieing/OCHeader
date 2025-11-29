@class NSArray, WCFinderUpdateTopicModel, UICollectionView, NSString;
@protocol WCFinderPostUsualTopicContainerViewDelegate;

@interface WCFinderPostUsualTopicContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCGeneralMonitorDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) WCFinderUpdateTopicModel *inputTextTopicModel;
@property (weak, nonatomic) id<WCFinderPostUsualTopicContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initCollectionView;
- (BOOL)updateWithRecommendTopicArray:(id)a0 inputTextTopicModel:(id)a1;
- (void)clearRecommendTopic;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

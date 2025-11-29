@class TextStatePublishReportObject, TextStatePublishIconList, UICollectionView, UICollectionViewFlowLayout, TextStateEmojiBoardModel, NSString;
@protocol TextStateEmojiBoardViewDelegate;

@interface TextStateEmojiBoardView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TextStateEmojiBoardModelDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) TextStatePublishIconList *publishIconList;
@property (retain, nonatomic) TextStateEmojiBoardModel *model;
@property (weak, nonatomic) id<TextStateEmojiBoardViewDelegate> delegate;
@property (retain, nonatomic) TextStatePublishReportObject *publishReportObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initViews;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)maximumRecentUsedEmojiCount;
- (id)getCurrentInputCustomIconDesc;
- (id)getPublishReportObject;
- (BOOL)isRecentUsedSectionValid;
- (void)startRequestCustomIconRecommendData:(id)a0;
- (void)checkRefreshRecommendGroup;
- (BOOL)isRecommendSectionValid;
- (void).cxx_destruct;

@end

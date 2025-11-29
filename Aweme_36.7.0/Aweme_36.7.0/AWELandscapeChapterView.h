@class NSArray, NSString, AWEAwemeModel, UICollectionViewFlowLayout, UICollectionView;

@interface AWELandscapeChapterView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWELandscapeChapterViewProtocol>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double maxSpace;
@property (readonly, copy, nonatomic) NSArray *chapterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;

- (void)configWithModel:(id)a0;
- (void)__configSubviews;
- (double)__calculateMaxSpace;
- (struct CGSize { double x0; double x1; })__textRectWithChapterInfo:(id)a0 font:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end

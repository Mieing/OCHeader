@class CAGradientLayer, NSArray, UICollectionView, UIImage, AWEAwemeModel, NSString;

@interface AWEModernFeedProgressSectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, AWEModernFeedProgressSectionViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (retain, nonatomic) UIImage *frameImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isFullPage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *chapterList;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ sectionViewClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(unsigned long long)a0 isFullPage:(BOOL)a1;
- (BOOL)useCommonThumbnailLogic;
- (void)refreshPreviewImageWithBigImage:(id)a0;
- (void)addPreviewImg;
- (void)getVideoPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (id)framePreviewImageForProgress:(double)a0 totalDuration:(double)a1 originalImage:(id)a2;
- (id)fetchDesStringWithIndex:(long long)a0;
- (void)configWithModel:(id)a0 andSelectedIndex:(long long)a1;
- (void)scrolltoSection:(long long)a0 isSelected:(BOOL)a1;
- (void)updateCollectionViewCellImageView;
- (void)refreshPreviewImage;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (unsigned long long)currentSection;

@end

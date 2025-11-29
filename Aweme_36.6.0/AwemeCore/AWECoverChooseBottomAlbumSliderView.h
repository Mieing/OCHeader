@class NSMutableDictionary, UICollectionView, NSString, AWEVideoPublishViewModel;
@protocol AWECoverChooseBottomAlbumSliderViewDelegate, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWECoverChooseBottomAlbumSliderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (retain, nonatomic) NSMutableDictionary *cacheImageDictionary;
@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (nonatomic) BOOL canLoadImage;
@property (nonatomic) BOOL isSlides;
@property (readonly, nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWECoverChooseBottomAlbumSliderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)topInset;

- (void)selectIndex:(long long)a0 animated:(BOOL)a1;
- (void)p_selectIndex:(long long)a0 animated:(BOOL)a1;
- (long long)p_numberOfItems;
- (id)initWithModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 cellSize:(struct CGSize { double x0; double x1; })a3;
- (void)loadImagesIfNeeded;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end

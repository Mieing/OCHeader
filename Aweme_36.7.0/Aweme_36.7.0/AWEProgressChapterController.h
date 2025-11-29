@class NSArray, AWEFakeProgressSliderView, AWEAwemeModel, AWEProgressChapterCollectionView, NSMutableArray, NSString;

@interface AWEProgressChapterController : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (nonatomic) double maxSpace;
@property (nonatomic) double progressWidth;
@property (nonatomic) BOOL hasVideoAbstract;
@property (nonatomic) BOOL hasLvideoHighLight;
@property (retain, nonatomic) NSArray *chapterInfoList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFakeProgressSliderView *fakeProgressSlider;
@property (retain, nonatomic) AWEProgressChapterCollectionView *chapterCollectionView;
@property (retain, nonatomic) NSMutableArray *chapterPointList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configModels;
- (id)initWithModel:(id)a0 progressSafeArea:(double)a1 extraParams:(id)a2;
- (double)__calculateMaxSpace;
- (struct CGSize { double x0; double x1; })__textRectWithChapterInfo:(id)a0 font:(id)a1;
- (double)realOffsetWithSlider:(id)a0;
- (void)shockIfNeeded:(id)a0;
- (BOOL)isAttachWithSlider:(id)a0;
- (unsigned long long)attchIndexWithSlider:(id)a0;
- (void)updateChapterViewStatus:(id)a0 animated:(BOOL)a1;
- (id)indexPathAtCollectionView:(id)a0;
- (long long)attachChapterIndexForTrackerWithSlider:(id)a0;
- (id)initWithModel:(id)a0 extraParams:(id)a1;
- (id)initWithModel:(id)a0 extraParams:(id)a1 progressWidth:(double)a2;
- (id)createChapterPointView;
- (void)configAdsorptionDistance;
- (BOOL)shouldShowHighLightCollectionView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end

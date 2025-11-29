@class NSArray, AWELiveVSTabBannerCell, NSString;
@protocol IGListCollectionContext;

@interface AWELiveVSTabBannerCellController : NSObject <DUXMultiLayoutBannerDelegate, DUXMultiLayoutBannerDataSource>

@property (weak, nonatomic) AWELiveVSTabBannerCell *cell;
@property (nonatomic) BOOL isInScreen;
@property (readonly, nonatomic) NSArray *model;
@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)a0;
- (void)containerViewDidAppear;
- (void)trackBannerCellShowWithEpisode:(id)a0;
- (void)bannerView:(id)a0 didScrollFromIndex:(long long)a1 toIndex:(long long)a2;
- (void)bannerView:(id)a0 didSelectedItemAtIndex:(long long)a1;
- (long long)bannerViewNumberOfItems:(id)a0;
- (id)bannerView:(id)a0 cellForIndexPath:(id)a1;
- (void)containerViewDidDisAppear;
- (struct CGSize { double x0; double x1; })sizeWithcollectionViewSize:(struct CGSize { double x0; double x1; })a0 cellContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (Class)cellClass;

@end

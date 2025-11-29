@class DVEVideoThumbnailManager, ACCAdvanceEditMainTrackDataSource, NSString;
@protocol ACCAdvanceEditMainTrackFrameUICustomizationDelegate;

@interface ACCAdvanceEditMainTrackFrameView : UICollectionView <UICollectionViewDataSource>

@property (retain, nonatomic) ACCAdvanceEditMainTrackDataSource *mainDataSource;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (nonatomic) long long curSelectSection;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackFrameUICustomizationDelegate> uiConfigDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)initWithDataSource:(id)a0 flowLayout:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)initData;

@end

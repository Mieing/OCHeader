@class DVEVideoThumbnailManager, NSString, UICollectionView;
@protocol ACCTCETrackEventServiceProtocol, ACCTrimCropSequencePieceServiceProtocol;

@interface ACCCropEditorThumbnailComponent : ACCTrimCropBaseComponent <UICollectionViewDataSource, UICollectionViewDelegate, DVEVideoThumbnailLoaderDataSource, ACCCropEditorSwitchPieceProtocol, ACCTrimCropSequencePieceServiceListener>

@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (retain, nonatomic) UICollectionView *thumbnailCollectionView;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (nonatomic) long long uiSelectedIndex;
@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (id)serviceBinding;
- (void)componentDidLoad;
- (double)segmentTimeClipStartWithSlot:(id)a0;
- (void)sequencePieceService:(id)a0 didTransferToIndex:(long long)a1 isAutoTransfer:(BOOL)a2;
- (double)timeScaleForSlot:(id)a0;
- (id)assetForSlot:(id)a0;
- (id)absolutePathForResourceNode:(id)a0;
- (void)setupThumbnailView;
- (long long)selectedCropPieceIndex;
- (id)cropPieceArray;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end

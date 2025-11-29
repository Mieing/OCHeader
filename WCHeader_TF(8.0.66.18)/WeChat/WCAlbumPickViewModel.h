@class NSString, NSMutableDictionary, NSMutableArray, OrderedDictionary;

@interface WCAlbumPickViewModel : NSObject <WCFacadeExt, WCAlbumPickerCollectionCellViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long homepageType;
@property (retain, nonatomic) NSMutableArray *timeTable;
@property (retain, nonatomic) NSMutableDictionary *timelineMediaData;
@property (retain, nonatomic) NSMutableArray *photoMutipleImageArray;
@property (nonatomic, getter=hasNoMoreData) BOOL noMoreData;
@property (retain, nonatomic) NSMutableDictionary *isSectionANewYearCache;
@property (copy, nonatomic) id /* block */ selectionChangeBlock;
@property (copy, nonatomic) id /* block */ didSelectedItemBlock;
@property (copy, nonatomic) id /* block */ dataDidChangeBlock;
@property (copy, nonatomic) id /* block */ fetchMoreDataResultBlock;
@property (copy, nonatomic) id /* block */ configFooterViewBlock;
@property (copy, nonatomic) id /* block */ getViewSizeBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidScrollBlock;
@property (copy, nonatomic) id /* block */ getIndexPathBlock;
@property (copy, nonatomic) id /* block */ finishDownloadBlock;
@property (retain, nonatomic) OrderedDictionary *selectedMediaItems;
@property (retain, nonatomic) NSMutableArray *prepardDownloadMediaInfos;
@property (nonatomic) unsigned long long maxSelectedImagesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithUserName:(id)a0 type:(long long)a1;

- (id)initWithUserName:(id)a0 type:(long long)a1;
- (void)dealloc;
- (void)setDidSelectdItemBlock:(id /* block */)a0;
- (void)registerExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)a0;
- (long long)getSelectedMediaType;
- (id)getSelectedMediaDownloadLocalPath;
- (id)getSelectedMediaContent;
- (id)checkSelectedMediaDownload;
- (void)downloadMediaList:(id)a0;
- (BOOL)isANewYearSection:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)onHomepage:(id)a0 type:(long long)a1 updateWithResult:(long long)a2 withAddedData:(id)a3 changedData:(id)a4 deletedData:(id)a5 tips:(id)a6;
- (long long)indexInSelectedMedia:(id)a0;
- (unsigned int)getSelectedCount;
- (void)onRemoveSelectedInfo:(id)a0;
- (BOOL)isMediaSelectable:(id)a0;
- (void)onToggleSelection:(id)a0;
- (void)handleItemPicked:(id)a0;
- (id)mediaOfIndexPath:(id)a0;
- (void)pickMedia:(id)a0;
- (id)findParentFeed:(id)a0;
- (BOOL)isPhotoMedia:(id)a0;
- (BOOL)hasSelectImageAsset;
- (BOOL)hasSelectVideoAsset;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end

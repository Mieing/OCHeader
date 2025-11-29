@class NSString, NSMutableDictionary, NSMutableSet, WCMomentsPageContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCStoryAlbumViewModel : NSObject <WCFacadeExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCStoryAlbumEntranceCollectionViewCellDelegate>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long homepageType;
@property (retain, nonatomic) NSMutableArray *timeTable;
@property (retain, nonatomic) NSMutableDictionary *timelineMediaData;
@property (retain, nonatomic) NSMutableArray *photoMutipleImageArray;
@property (retain, nonatomic) NSMutableSet *tidSet;
@property (nonatomic, getter=hasNoMoreData) BOOL noMoreData;
@property (retain, nonatomic) NSMutableDictionary *isSectionANewYearCache;
@property (copy, nonatomic) id /* block */ didSelectedItemBlock;
@property (copy, nonatomic) id /* block */ dataDidChangeBlock;
@property (copy, nonatomic) id /* block */ fetchMoreDataResultBlock;
@property (copy, nonatomic) id /* block */ configFooterViewBlock;
@property (copy, nonatomic) id /* block */ getViewSizeBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidScrollBlock;
@property (copy, nonatomic) id /* block */ EntranceCellClickBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleDataQueue;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithUserName:(id)a0;

- (id)initWithUserName:(id)a0;
- (void)dealloc;
- (void)registerExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)a0;
- (BOOL)isANewYearSection:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)onHomepage:(id)a0 type:(long long)a1 updateWithResult:(long long)a2 withAddedData:(id)a3 changedData:(id)a4 deletedData:(id)a5 tips:(id)a6;
- (void)onTogetherBadgesChanged;
- (void)onEntranceCellClick;
- (void).cxx_destruct;

@end

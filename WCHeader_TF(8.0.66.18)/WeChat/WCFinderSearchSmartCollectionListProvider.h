@class WCFinderShareFeedDataProvider, NSString, FinderCollectionInfo, WCFinderFeedArray;

@interface WCFinderSearchSmartCollectionListProvider : NSObject <WCFinderFeedArrayDelegate, WCFinderCollectionFeedListProvider>

@property (retain, nonatomic) NSString *traceTag;
@property (retain, nonatomic) WCFinderShareFeedDataProvider *dataProvider;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (nonatomic) BOOL hasMoreCollectionTop;
@property (nonatomic) BOOL hasMoreCollectionBottom;
@property (nonatomic) BOOL filterCollectionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineProvider:(id)a0 contentVM:(id)a1 commentScene:(int)a2;
+ (id)newListProvider:(id)a0 contentVM:(id)a1 commentScene:(int)a2;

- (id)initWithDataProvider:(id)a0 collectionInfo:(id)a1 commentScene:(int)a2 firstPageDatas:(id)a3 filterCollectionId:(BOOL)a4 useProviderFeedArray:(BOOL)a5;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (BOOL)isPullingTop;
- (BOOL)isPullingBottom;
- (BOOL)isPullingFirstPage;
- (void)pullTop:(id /* block */)a0;
- (void)pullBottom:(id /* block */)a0;
- (void)pullFirstPage:(id /* block */)a0;
- (void)_checkFetchState;
- (BOOL)feedArray:(id)a0 ignoreContentVM:(id)a1;
- (unsigned long long)collectionTopicID;
- (void).cxx_destruct;

@end

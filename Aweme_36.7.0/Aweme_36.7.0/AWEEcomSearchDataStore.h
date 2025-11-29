@class NSArray, AWEEcomSearchResultResponse, AWEDoubleColumnSearchMerchandiseResponse, NSDictionary, AWEDoubleColumnSearchMerchandiseQueryModel, NSString;

@interface AWEEcomSearchDataStore : NSObject <AWEEcomSearchDataStoreProtocol>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseResponse *model;
@property (retain, nonatomic) AWEEcomSearchResultResponse *modelV3;
@property (copy, nonatomic) NSArray *rawSearchResults;
@property (copy, nonatomic) NSArray *searchResults;
@property (copy, nonatomic) NSArray *patchSearchResults;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *firstChunkQueryModel;
@property (retain, nonatomic) NSDictionary *asyncChunkItemMap;
@property (copy, nonatomic) NSArray *prefetchImageUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)merchandiseResetLynxCardStatus:(id)a0;
- (void)updateOriginModelDynamicPatch:(id)a0 withFullModel:(id)a1;
- (BOOL)isValidateURL:(id)a0;
- (id)replaceItemsWithAsyncChunk:(BOOL *)a0;
- (void)handleAsyncChunkWithResponse:(id)a0;
- (BOOL)isV3Response:(id)a0;
- (id)v3ResponseInSearchResponse:(id)a0;
- (id)feedSectionInResultResponse:(id)a0;
- (id)findFirstChunkQueryModelInItems:(id)a0;
- (id)feedSectionInResponse:(id)a0;
- (void)handleFullChunkWithResponse:(id)a0;
- (void)handleFilterChunkWithResponse:(id)a0;
- (void)mergeAsyncChunkIfNeedWithResponse:(id)a0;
- (void)updatePrefetchImageUrls:(id)a0;
- (void).cxx_destruct;
- (void)clearData;

@end

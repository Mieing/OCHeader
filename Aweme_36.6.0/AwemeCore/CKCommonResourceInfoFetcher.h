@interface CKCommonResourceInfoFetcher : NSObject

@property (getter=isFetchCommonResourceInfo) BOOL fetchCommonResourceInfo;

+ (id)defaultFetcher;
+ (void)fetchCommonResourceInfoListWithRequestModel:(id)a0 completion:(id /* block */)a1;

- (void)internalFetchCommonResourceInfoListWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (id)commonResourceInfoModelFromCache;
- (void)saveToCacheWithCommonResourceInfoListResponse:(id)a0;

@end

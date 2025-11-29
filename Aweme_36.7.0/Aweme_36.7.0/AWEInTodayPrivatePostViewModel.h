@class NSString, NSMutableArray;

@interface AWEInTodayPrivatePostViewModel : NSObject <AWEInTodayPrivatePostViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *memoriesList;
@property (nonatomic) unsigned long long coverType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPrivatePostMemoriesListWithCompletion:(id /* block */)a0;
- (void)getAggregatedPhotoLibrary:(id /* block */)a0;
- (void)fetchPrivatePostMemoryModelWithCompletion:(id /* block */)a0;
- (void)checkAlbumValid:(id)a0 completion:(id /* block */)a1;
- (void)processQueryResultWithResp:(id)a0 coverUri:(id)a1 networkError:(id)a2 ompletion:(id /* block */)a3;
- (void)hasAggregatedPhotoLibrary:(id /* block */)a0;
- (void)fetchMemoryModelCachedWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end

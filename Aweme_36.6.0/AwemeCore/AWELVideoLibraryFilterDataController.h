@class AWELVideoLibraryFilterRequestModel, AWELVideoLibraryFilterResponseModel;

@interface AWELVideoLibraryFilterDataController : AWEBaseDataController

@property (retain, nonatomic) AWELVideoLibraryFilterRequestModel *requestModel;
@property (retain, nonatomic) AWELVideoLibraryFilterResponseModel *filterData;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (id)searchKeys;
- (id)wordNames;
- (void).cxx_destruct;

@end

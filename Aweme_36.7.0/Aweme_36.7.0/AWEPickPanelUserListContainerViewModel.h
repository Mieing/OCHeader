@class NSDictionary, AWEAwemeModel;

@interface AWEPickPanelUserListContainerViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double maxCursor;

- (void)removeSelf;
- (void)updateUserListWithPickStatus:(BOOL)a0;
- (id)currentSectionViewModel;
- (void)fetchListDataWithCompletion:(id /* block */)a0;
- (void)handleResponse:(id)a0 isSuccess:(BOOL)a1 hasMore:(BOOL)a2 maxCursor:(double)a3;
- (void)insertSelf;
- (void).cxx_destruct;

@end

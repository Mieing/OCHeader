@class NSArray;

@interface AWEIMFansPostWorkListViewModel : AWEIMFansBaseViewModel

@property (copy, nonatomic) NSArray *fetchedFansDataSourceUserIDs;

- (void)fetchUserPostListWithNoticeList:(id)a0 isRefresh:(BOOL)a1;
- (void)p_handleUserPostList:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end

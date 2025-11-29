@class NSString, AWEURLModel;

@interface AWETeenAlbumResourceProfileDataController : AWEListDataController

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *introduction;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSString *pageToken;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithResourceID:(id)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

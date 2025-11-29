@class AWEAnchorAdditionListModel;

@interface AWEAnchorAdditionSearchDataController : AWEListDataController

@property (nonatomic) long long anchorType;
@property (nonatomic) long long page;
@property (retain, nonatomic) AWEAnchorAdditionListModel *listModel;

- (id)initWithAnchorBusinessType:(long long)a0;
- (void)fetchSearchGameDataSourceWithKeyword:(id)a0 page:(long long)a1 completion:(id /* block */)a2;
- (void)refreshWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

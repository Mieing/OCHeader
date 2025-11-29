@class NSMutableArray;

@interface AWEFollowGroupViewModel : AWEBaseViewModel

@property (nonatomic) long long total;
@property (nonatomic) long long cursor;
@property (nonatomic) long long perPageCount;
@property (nonatomic) long long maxMemberCount;
@property (nonatomic) long long groupType;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long showLimit;
@property (retain, nonatomic) NSMutableArray *groupArray;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)updateOneGroupName:(id)a0 newName:(id)a1;
- (void)updateOneGroupMemberInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteOneGroupWithGroupID:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupType:(long long)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

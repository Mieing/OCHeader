@class NSString, NSArray;

@interface AWEPublishExclusionListDataController : AWEListDataController

@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL isDigest;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSArray *secUserList;

- (id)initWithAwemeID:(id)a0 isDigest:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

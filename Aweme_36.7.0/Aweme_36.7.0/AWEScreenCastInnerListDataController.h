@class NSNumber, NSString;

@interface AWEScreenCastInnerListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchId;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)initWithAwemeModelList:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

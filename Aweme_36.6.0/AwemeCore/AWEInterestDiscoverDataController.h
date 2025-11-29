@class NSNumber, NSString;

@interface AWEInterestDiscoverDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *interestIDString;
@property (copy, nonatomic) NSString *interestNameString;
@property (copy, nonatomic) NSString *fromGIDString;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

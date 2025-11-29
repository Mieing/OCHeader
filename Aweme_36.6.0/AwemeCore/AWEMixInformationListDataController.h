@class NSNumber, NSString;

@interface AWEMixInformationListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (id)urlForProfileMix;
- (void)trackWithError:(id)a0 logid:(id)a1 model:(id)a2;
- (void)loadMoreWithCurrentMixID:(id)a0 completion:(id /* block */)a1;
- (void)requestUserCreateMixCountWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)params;
- (void)appendData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

@class NSNumber, NSString, NSDictionary;

@interface AWEProfileMixDataManager : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *watchingMixID;
@property (retain, nonatomic) NSNumber *justWatchedMixEpisode;
@property (copy, nonatomic) NSString *justWatchedItemID;
@property (retain, nonatomic) NSDictionary *logPb;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (id)urlForProfileMix;
- (void)trackWithError:(id)a0 logid:(id)a1 model:(id)a2;
- (void)updateUserID:(id)a0 secUserID:(id)a1 watchingMixID:(id)a2 justWatchedMixEpisode:(id)a3 justWatchedItemID:(id)a4;
- (void).cxx_destruct;
- (void)removeAll;
- (id)params;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

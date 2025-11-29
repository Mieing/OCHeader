@class NSNumber, NSString;

@interface AWEEffectArtistDataController : AWEListDataController

@property (nonatomic) long long count;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *cursorSource;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (BOOL)canLoadMore;
- (long long)toppedEffectModelCount;
- (long long)hiddenEffectModelCount;
- (void)pinToTopEffectModel:(id)a0 withComletion:(id /* block */)a1;
- (void)hideEffectModel:(id)a0 withComletion:(id /* block */)a1;
- (void)removeAwemeCoverEffectModel:(id)a0 withComletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

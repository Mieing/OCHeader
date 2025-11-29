@class NSString;

@interface IESLiveKTVSearchApi : IESLiveKTVBaseApi

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *logId;

- (void)requestHotSearchWithMode:(long long)a0 completion:(id /* block */)a1;
- (void)searchMusicWithKeyWord:(id)a0 anchorID:(id)a1 page:(long long)a2 mode:(long long)a3 querySource:(int)a4 extraParams:(id)a5 completionBlock:(id /* block */)a6;
- (void)searchMusicWithKeyWord:(id)a0 anchorID:(id)a1 page:(long long)a2 mode:(long long)a3 completionBlock:(id /* block */)a4;
- (void)requestSearchAssociatedWord:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

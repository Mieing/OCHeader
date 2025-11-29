@class NSData, FinderNotifySeiInfo;

@interface WCFinderLiveSyncNotifySeiInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderNotifySeiInfo *notifySeiInfo;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 notifySeiInfo:(id)a2 completion:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

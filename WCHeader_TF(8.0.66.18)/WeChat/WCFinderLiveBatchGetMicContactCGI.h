@class NSData, NSArray;

@interface WCFinderLiveBatchGetMicContactCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long getScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSArray *micUsernameList;
@property (retain, nonatomic) NSArray *sessionIds;
@property (retain, nonatomic) NSArray *applyIds;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 getScene:(unsigned long long)a2 micUsernameList:(id)a3 sessionIds:(id)a4 applyIds:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

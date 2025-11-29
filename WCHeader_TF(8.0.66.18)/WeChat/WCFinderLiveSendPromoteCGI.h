@interface WCFinderLiveSendPromoteCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long promoteId;
@property (nonatomic) unsigned long long requestScene;
@property (nonatomic) int opScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

+ (id)createSendPromoteCGIWithLiveTaskId:(id)a0 promoteId:(unsigned long long)a1 requestScene:(unsigned long long)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
+ (id)createCancelPromoteCGIWithLiveTaskId:(id)a0 promoteId:(unsigned long long)a1 requestScene:(unsigned long long)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;

- (id)initWithLiveTaskId:(id)a0 opScene:(int)a1 promoteId:(unsigned long long)a2 requestScene:(unsigned long long)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

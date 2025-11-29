@class NSString;

@interface WCFinderLiveReserveLiveNotceCGI : WCFinderLiveBaseCgi

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) int opType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) long long innerScene;

- (id)initWithTaskId:(id)a0 scene:(long long)a1 innerScene:(long long)a2 opType:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithUserName:(id)a0 scene:(long long)a1 innerScene:(long long)a2 opType:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

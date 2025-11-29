@class NSString, NSData;

@interface WCFinderLiveUserPageCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsername:(id)a0 flag:(long long)a1 lastBuffer:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest:(long long)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

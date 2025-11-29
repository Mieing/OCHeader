@class NSData, NSString, WCFinderContact;

@interface WCFinderNewCloseMicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *applyId;
@property (retain, nonatomic) NSString *sessionId;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 applyId:(id)a2 sessionId:(id)a3 toFinderContact:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

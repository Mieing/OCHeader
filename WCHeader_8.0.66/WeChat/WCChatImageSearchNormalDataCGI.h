@class NSString;

@interface WCChatImageSearchNormalDataCGI : WCBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *requestID;

- (id)initWithRequest:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

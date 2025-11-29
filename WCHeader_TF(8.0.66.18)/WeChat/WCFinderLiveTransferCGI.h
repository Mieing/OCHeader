@class WXPBGeneratedMessage;

@interface WCFinderLiveTransferCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WXPBGeneratedMessage *requestObject;
@property (nonatomic) Class responseObjectClass;
@property (retain, nonatomic) WXPBGeneratedMessage *responseObject;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 cgiNumber:(unsigned int)a1 requestObject:(id)a2 responseObjectClass:(Class)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
- (id)createTransferRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

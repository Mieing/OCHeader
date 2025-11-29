@class NSString;

@interface WCFinderLiveCheckVerifyResultCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int verifyType;
@property (retain, nonatomic) NSString *secverifyId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithVerifyType:(unsigned int)a0 secverifyId:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

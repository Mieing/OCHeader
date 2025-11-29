@interface MMFinderLiveModPreviewLiveDisplayFloatMsgCGI : WCFinderBaseCgi

@property (nonatomic) unsigned int opType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithOpType:(unsigned int)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

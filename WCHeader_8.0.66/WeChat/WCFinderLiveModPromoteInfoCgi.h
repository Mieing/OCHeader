@class MMFinderLiveAnchorPromoteInfo;

@interface WCFinderLiveModPromoteInfoCgi : WCFinderLiveBaseCgi

@property (nonatomic) int opType;
@property (retain, nonatomic) MMFinderLiveAnchorPromoteInfo *modPromoteInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 opType:(unsigned long long)a1 promoteInfo:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)getCurrentAnchorUsername;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSString, NSMutableArray;

@interface WCFinderLiveGetFlowSignUrlCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long quotaAmount;
@property (retain, nonatomic) NSMutableArray *packageTypes;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAnchorFinderUsername:(id)a0 objectId:(unsigned long long)a1 liveId:(unsigned long long)a2 quotaAmount:(unsigned long long)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

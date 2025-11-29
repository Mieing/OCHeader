@class NSString, NSData;

@interface WCFinderLiveAnchorGetJumpInfoListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *lastBuffer;

- (id)initWithLiveTaskId:(id)a0 type:(unsigned int)a1 anchorFinderUsername:(id)a2 lastBuffer:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

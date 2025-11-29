@class NSArray, NSMutableArray;

@interface FinderLiveAudienceOpLogCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *cmdItemRequestWrapList;
@property (retain, nonatomic) NSArray *unmutableCmdItemRequestWrapList;

- (id)initWithScene:(unsigned int)a0;
- (void)addCmdItem:(id)a0 completeCallBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)start;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

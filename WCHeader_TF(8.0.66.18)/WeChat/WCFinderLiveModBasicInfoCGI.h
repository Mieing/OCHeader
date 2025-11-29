@class NSArray, NSMutableArray;

@interface WCFinderLiveModBasicInfoCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *cmdItemRequestWrapList;
@property (retain, nonatomic) NSArray *unmutableCmdItemRequestWrapList;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;

- (id)initWithFinderTaskId:(id)a0 scene:(unsigned int)a1;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 scene:(unsigned int)a2;
- (void)addCmdItem:(id)a0 completeCallBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)start;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

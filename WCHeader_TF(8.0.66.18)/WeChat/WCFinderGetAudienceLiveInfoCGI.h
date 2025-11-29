@class FinderLiveContact;

@interface WCFinderGetAudienceLiveInfoCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderLiveContact *audienceContact;

- (id)initWithFinderTaskId:(id)a0 audienceContact:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initWithFinderObjectId:(unsigned long long)a0 audienceContact:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCFinderModEventCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long eventTopicId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithUsername:(id)a0 eventTopicId:(unsigned long long)a1 scene:(unsigned int)a2 objectId:(unsigned long long)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

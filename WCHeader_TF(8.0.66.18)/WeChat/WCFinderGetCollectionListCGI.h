@class NSString, NSData;

@interface WCFinderGetCollectionListCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int businessType;

- (id)initWithUsername:(id)a0 scene:(unsigned int)a1 businessType:(unsigned int)a2 lastBuffer:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

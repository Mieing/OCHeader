@class NSData, NSString;

@interface WCGetFinderPOIListCGI : WCFinderBaseCgi

@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithPullType:(unsigned int)a0 lastBuffer:(id)a1 finderUsername:(id)a2 longitude:(float)a3 latitude:(float)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

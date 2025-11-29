@class NSString, NSData;

@interface WCFinderGetFavPOIListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSData *lastBuffer;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsername:(id)a0 lastBuffer:(id)a1 longitude:(float)a2 latitude:(float)a3 success:(id /* block */)a4 fail:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

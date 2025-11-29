@class NSString;

@interface WCFinderProfilePOISearchCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *queryText;
@property (retain, nonatomic) NSString *finderUserName;
@property (nonatomic) double longtitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithQueryText:(id)a0 finderUsername:(id)a1 longtitude:(double)a2 latitude:(double)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

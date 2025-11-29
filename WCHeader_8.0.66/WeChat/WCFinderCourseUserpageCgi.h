@class NSString, NSData;

@interface WCFinderCourseUserpageCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsername:(id)a0 lastBuffer:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

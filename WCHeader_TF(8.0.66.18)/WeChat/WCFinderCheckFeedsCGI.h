@class NSArray;

@interface WCFinderCheckFeedsCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSArray *readItems;
@property (copy, nonatomic) NSArray *unreadItems;

- (id)initWithReadItems:(id)a0 unreadItems:(id)a1 scene:(int)a2 prefetchType:(int)a3 lastCheckBuffer:(id)a4 liveBaseInfo:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSData, NSMutableArray;

@interface WCFinderCheckPrefetchCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableArray *tidList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) int prefetchType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) int commentScene;

- (id)initWithTidList:(id)a0 lastBuffer:(id)a1 prefetchType:(int)a2 scene:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCStoryHideCgiObj : WCStoryBaseCGIObj

@property (retain, nonatomic) NSString *dataItemTid;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) BOOL isInvisibility;
@property (copy, nonatomic) id /* block */ dbSyncBlock;

- (id)initWithDataItemTid:(id)a0 isInvisibility:(BOOL)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

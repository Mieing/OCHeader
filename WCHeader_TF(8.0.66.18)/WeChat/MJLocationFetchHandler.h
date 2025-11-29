@interface MJLocationFetchHandler : NSObject <ILocationMgrExt>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) unsigned long long taskToken;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)init;
- (BOOL)isFetching;
- (void)fetcherWithLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)fetchUserLocationWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)dealloc;
- (void)clear;
- (void)callbackBusy:(id /* block */)a0;
- (void)onTimeout;
- (void)onDidFindAddress:(id)a0 forTag:(unsigned long long)a1;
- (void)onGPSAccurateLocationChanged:(id)a0 withTag:(unsigned long long)a1;
- (void).cxx_destruct;

@end

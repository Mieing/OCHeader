@class NSString;

@interface AWEDataLayer : NSObject <AWEDataLayerConfigInterface, AWEDataLayerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLogCallback:(void /* function */ *)a0;
+ (id)fetchDataWithNetworkProvider:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (id)fetchDataWithNetworkProvider:(id)a0 config:(id)a1 lifeCycleObject:(id)a2 completion:(id /* block */)a3;
+ (void)setupNetworkImpl:(id)a0;
+ (id)getAllTokenWithRequestIdentifier:(id)a0;
+ (void)setDebugLogCallback:(void /* function */ *)a0;
+ (void)setTrackCallback:(void /* function */ *)a0;


@end

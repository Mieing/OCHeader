@class NSString;
@protocol AWEPassportNetworkManager;

@interface AWEPassportNetworkManager : NSObject <AWEPassportNetworkManager>

@property (retain, nonatomic) id<AWEPassportNetworkManager> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupWithImplementation:(id)a0;
+ (void)GET:(id)a0 parameters:(id)a1 headers:(id)a2 model:(Class)a3 completion:(id /* block */)a4;
+ (void)POST:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
+ (void)GETJSONDictionary:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (void)POSTJSONDictionary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)_monitorNetworking:(id)a0 parameters:(id)a1 error:(id)a2 response:(id)a3;
+ (void)GET:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
+ (id)sharedManager;

- (void)GET:(id)a0 parameters:(id)a1 headers:(id)a2 model:(Class)a3 completion:(id /* block */)a4;
- (void)POST:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
- (void)GETJSONDictionary:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)POSTJSONDictionary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)GETJSONDictionary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)domain;

@end

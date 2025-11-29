@class NSString;

@interface RTVNetworkManagerIMP : NSObject <RTVNetworkManager>

@property (readonly, nonatomic) NSString *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestJSONFromPath:(id)a0 params:(id)a1 method:(long long)a2 modelClass:(Class)a3;
- (id)__URLWithPath:(id)a0;
- (id)__requestWithURL:(id)a0 params:(id)a1 method:(long long)a2 model:(Class)a3 callback:(id /* block */)a4;

@end

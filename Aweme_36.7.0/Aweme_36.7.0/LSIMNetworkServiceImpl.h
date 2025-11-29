@class NSString;

@interface LSIMNetworkServiceImpl : NSObject <LSIMNetService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)apiHost;
- (id)httpRequestMethod:(id)a0 URLString:(id)a1 params:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 timeout:(double)a5 modelClass:(Class)a6 completion:(id /* block */)a7;
- (id)httpRequestMethod:(id)a0 URLString:(id)a1 params:(id)a2 headerField:(id)a3 timeout:(double)a4 modelClass:(Class)a5 completion:(id /* block */)a6;

@end

@class NSString, NSMutableDictionary;
@protocol DitoNetworkProtocol;

@interface DitoDataSupplierImplementation : NSObject <DitoDataSupplierProtocol>

@property (weak, nonatomic) id<DitoNetworkProtocol> networkImpl;
@property (retain, nonatomic) NSMutableDictionary *modelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeRequestModelWithKey:(id)a0 target:(id)a1 handler:(id /* block */)a2;
- (id)fetchRequestModelWithKey:(id)a0;
- (BOOL)cacheWithRequestPath:(id)a0 params:(id)a1 withKey:(id)a2;
- (BOOL)cacheRequestModel:(id)a0 withKey:(id)a1;
- (void)sendRequestWithRequestModel:(id)a0;
- (id)fetchRawDataImmediatelyWithSubscribeKey:(id)a0;
- (void)removeRequestModelWithKey:(id)a0;
- (void)removeSubscriber:(id)a0 withKey:(id)a1;
- (void)removeSubscriber:(id)a0 handler:(id /* block */)a1 withKey:(id)a2;
- (BOOL)cacheRawData:(id)a0 withKey:(id)a1;
- (id)initWithNetworkImpl:(id)a0;
- (void).cxx_destruct;

@end

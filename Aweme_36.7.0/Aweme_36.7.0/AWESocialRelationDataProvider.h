@class NSArray, NSDictionary, NSHashTable, NSString;

@interface AWESocialRelationDataProvider : HTSService <AWESocialRelationDataProvider>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDictionary *trackSampleConfig;
@property (retain, nonatomic) NSArray *interceptRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)read:(id)a0 completion:(id /* block */)a1;
- (id)observe:(id)a0 handler:(id /* block */)a1;
- (void)notifyAllObservers:(id)a0;
- (id)interceptor_readFromMemory:(id)a0;
- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)interceptor_readFromNetwork:(id)a0 completion:(id /* block */)a1;
- (void)interceptor_write:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_shouldInterceptRequest:(id)a0 action:(id)a1;
- (void)p_trackRequest:(id)a0 response:(id)a1 action:(id)a2 cost:(double)a3;
- (void).cxx_destruct;
- (id)identifier;
- (id)currentObservers;

@end

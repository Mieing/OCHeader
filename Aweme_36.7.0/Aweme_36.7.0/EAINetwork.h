@class NSString, NSObject;
@protocol OS_dispatch_queue, EAIRegistry;

@interface EAINetwork : NSObject <EAINetworkInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<EAIRegistry> registry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestURL:(id)a0;
- (void)handleResponse:(id)a0 class:(Class)a1 error:(id)a2 callback:(id /* block */)a3;
- (void)request:(id)a0 params:(id)a1 class:(Class)a2 callback:(id /* block */)a3;
- (void)requestCofig:(id /* block */)a0;
- (void)requestModelInfo:(id)a0 callbak:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 registry:(id)a1;
- (void).cxx_destruct;

@end

@class NSString;

@interface PIANetworkService : NSObject <PIANetworkService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (id)taskWithRequest:(id)a0 responseHandler:(id /* block */)a1;

@end

@class NSString;

@interface PIACustomNetworkIMP : NSObject <PIAInterfaceNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (id)sharedInstance;

- (id)commonParams;
- (id)taskWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end

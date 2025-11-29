@class NSString;

@interface PIANetworkCustomImplEngine : NSObject <PIANetworkEngine>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)available;
- (long long)engineType;

@end

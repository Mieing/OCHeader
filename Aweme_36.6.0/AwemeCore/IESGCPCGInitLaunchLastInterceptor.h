@class NSString;

@interface IESGCPCGInitLaunchLastInterceptor : NSObject <IESGCPCGInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doInterceptWithContext:(id)a0 completion:(id /* block */)a1;
- (id)name;
- (long long)priority;

@end

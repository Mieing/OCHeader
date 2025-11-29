@class NSString;

@interface AnimaXBase64Loader : NSObject <AnimaXLoaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getScheme;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;

@end

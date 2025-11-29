@class NSString;

@interface LynxWebViewDefaultLoaderProvider : NSObject <LynxWebViewLoaderProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;

- (id)createLynxWebViewLoaderWithDelegate:(id)a0;

@end

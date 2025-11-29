@class NSString;

@interface SECLynxPageMonitor : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 didLoadContext:(id)a1;
- (void)lynxView:(id)a0 prepareGlobalProps:(id)a1;

@end

@class NSString;

@interface SECEventFlowSECLynxPlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 prepareLoaderContext:(id)a1;

@end

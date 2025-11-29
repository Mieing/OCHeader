@class NSString;

@interface SECLynxPiperNamePlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPluginInit;
- (void)lynx:(id)a0 piperWillInvoke:(id)a1;
- (long long)priority;

@end

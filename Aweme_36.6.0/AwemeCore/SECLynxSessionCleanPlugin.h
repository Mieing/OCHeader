@class NSString;

@interface SECLynxSessionCleanPlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewWillDealloc:(id)a0;
- (void)onLynxPiperResponsed:(id)a0;
- (long long)priority;

@end

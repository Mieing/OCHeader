@class NSString;

@interface ZidlBuildService : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildZidl;
- (void)onServiceInit;
- (void)onServiceTerminate;

@end

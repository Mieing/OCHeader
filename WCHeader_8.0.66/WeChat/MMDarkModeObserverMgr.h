@class NSString;

@interface MMDarkModeObserverMgr : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createObserverWithBlock:(id /* block */)a0;

@end

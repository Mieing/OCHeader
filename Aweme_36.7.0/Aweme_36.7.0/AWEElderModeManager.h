@class NSString;

@interface AWEElderModeManager : NSObject <AWEElderModeManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)elderModeStateDidInit:(BOOL)a0;
- (void)elderModeDidChangeToState:(BOOL)a0;
- (BOOL)__isElderGuardStatusModelValid:(id)a0;
- (void)fetchElderGuardModeStatusCompletion:(id /* block */)a0;
- (void)routerToURLString:(id)a0 completion:(id /* block */)a1;
- (id)requestParams;

@end

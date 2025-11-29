@class NSString;

@interface WCFinderFlutterManager : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)init;
- (void)preloadFlutterEngine;
- (id)createFlutterInstance;
- (id)createFlutterInstance:(id)a0;
- (id)createFlutterInstance:(id)a0 moduleName:(id)a1 plugins:(id)a2 arguments:(id)a3;
- (id)createFlutterViewControllerWithTag:(id)a0;
- (id)createFlutterViewControllerWithTag:(id)a0 plugins:(id)a1 arguments:(id)a2;
- (id)createFlutterViewControllerWithTag:(id)a0 moduleName:(id)a1 plugins:(id)a2 arguments:(id)a3;
- (id)createFlutterWeUIDemoViewController;
- (id)createNPSFlutterVC:(id)a0;
- (id)createTingEntryFlutterVC:(id)a0;

@end

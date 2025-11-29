@class NSString, NSMutableArray;

@interface AWEDCFeedControllerManager : AWEShellControllerManager <AWEDCFeedEventDispatcherProtocol>

@property (retain, nonatomic) NSMutableArray *controllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)getClassArray;
- (id)removeUnloadControllersWithContext:(id)a0;
- (void).cxx_destruct;
- (void)setupWithContext:(id)a0;

@end

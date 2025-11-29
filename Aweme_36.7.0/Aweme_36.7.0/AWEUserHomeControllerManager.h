@class NSString, AWEProfileTabListRegistry;
@protocol AWEProfileHeaderViewControllerProviderProtocol;

@interface AWEUserHomeControllerManager : AWEShellControllerManager <AWEUserHomeControllerProtocol>

@property (retain, nonatomic) AWEProfileTabListRegistry *tabListRegistry;
@property (retain, nonatomic) id<AWEProfileHeaderViewControllerProviderProtocol> headerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadUserPageAdapterClass;

- (id)classNameArray;
- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)aAWEPadUserPageAdapter;
- (id)__classNameArray;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEProfileNavigationHomeComponent : AWEProfileNavigationBaseComponent <AWEUserHomeControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)viewDidLoad;

@end

@class NSString;

@interface AWEProfileNavigationDetailComponent : AWEProfileNavigationBaseComponent <AWEUserDetailControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWillRefreshWithUser:(id)a0;
- (void)viewDidLoad;

@end

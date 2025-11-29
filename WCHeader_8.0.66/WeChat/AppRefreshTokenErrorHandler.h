@class NSString, MMUINavigationController;

@interface AppRefreshTokenErrorHandler : MMObject <MMAppRefreshTokenErrorViewControllerDelegate>

@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString;

@interface AWEUserWorkPrivacyController : AWEUserWorkChangeController <AFDAwemePermissionMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (void)dealloc;
- (void)containerViewDidLoad;

@end

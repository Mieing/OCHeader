@class NSString;

@interface AWEStudioPublicAuthServiceImpl : NSObject <AWEStudioPublicAuthService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)noAlbumAuthMessage;
- (void)showAlertNoAlbumAuthWithConfirm:(id /* block */)a0;
- (void)showAlertNoAlbumAuthWithConfirm:(id /* block */)a0 cancel:(id /* block */)a1;

@end

@class NSString;

@interface AWECloudAlbumUploadAuthorizationImpl : NSObject <AWECloudAlbumPanelCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createCustomNavigationControllerWithViewController:(id)a0;
- (id)createAuthorizationPage;

@end

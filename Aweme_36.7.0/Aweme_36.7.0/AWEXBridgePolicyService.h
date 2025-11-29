@class NSString;

@interface AWEXBridgePolicyService : NSObject <BDXBridgePolicyServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calendarsForEntityStore:(id)a0 entityType:(unsigned long long)a1 token:(id)a2 context:(id)a3;
- (long long)authorizationStatusForEntityType:(unsigned long long)a0 token:(id)a1 context:(id)a2;
- (void)requestAccessForMediaType:(id)a0 completionHandler:(id /* block */)a1 token:(id)a2 context:(id)a3;
- (void)openUrl:(id)a0 token:(id)a1 context:(id)a2;
- (void)requestAccessForCalendarType:(unsigned long long)a0 eventStore:(id)a1 completion:(id /* block */)a2 token:(id)a3 context:(id)a4;
- (void)setString:(id)a0 token:(id)a1 context:(id)a2;
- (void)requestAuthorizationForAlbumType:(id /* block */)a0 token:(id)a1 context:(id)a2;
- (void)requestAccessForUserNotificationsWithOptions:(unsigned long long)a0 handler:(id /* block */)a1 token:(id)a2 context:(id)a3;
- (id)getUIImagePickerControllerWithToken:(id)a0 context:(id)a1;
- (void)getStringWithToken:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)requestAuthorizationForAlbumTypeForAccessLevel:(unsigned long long)a0 handler:(id /* block */)a1 token:(id)a2 context:(id)a3;
- (void)requestAccessForEntityType:(long long)a0 token:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;

@end

@interface BDXBridgeRequestPermissionMethod : BDXBridgeMethod

+ (void)showAlertIfSupported:(unsigned long long)a0 tokenContext:(id)a1 completion:(id /* block */)a2;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)requestPermissionForCalendarType:(id /* block */)a0;
- (id)bdxConvertRPM2CPM:(id)a0;
- (void)requestPermissionWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestPermissionForCameraType:(id /* block */)a0;
- (void)requestPermissionForContactsType:(id /* block */)a0;
- (void)requestPermissionForContactsType:(id /* block */)a0;
- (void)requestPermissionForLocationType:(id /* block */)a0;
- (void)requestPermissionForLocationType:(id /* block */)a0;
- (void)requestPermissionForMicrophoneType:(id /* block */)a0;
- (void)requestPermissionForNotificationType:(id /* block */)a0;
- (void)requestAccessLevel:(unsigned long long)a0 forPhotoAlbumType:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

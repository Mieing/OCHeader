@class NSString;
@protocol IESLivePrivacyApiService;

@interface IESLivePrivacyApiServiceImpl : NSObject <IESLivePrivacyApiService>

@property (retain, nonatomic) id<IESLivePrivacyApiService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)requestRecordPermission:(id /* block */)a0 audioSession:(id)a1 privacyCert:(id)a2;
- (id)fetchAssetsWithMediaType:(long long)a0 options:(id)a1 cert:(id)a2 error:(id *)a3;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAccessMicrophoneWithPrivacyHybridCert:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (int)startAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 privacyCert:(id)a1 error:(id *)a2;
- (int)stopAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 privacyCert:(id)a1 error:(id *)a2;
- (void)requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyCert:(id)a2 completion:(id /* block */)a3;
- (long long)authorizationStatusForEntityType:(unsigned long long)a0 privacyCert:(id)a1 error:(id *)a2;
- (id)calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyCert:(id)a2 error:(id *)a3;
- (id)eventsMatchingPredicate:(id)a0 eventStore:(id)a1 privacyCert:(id)a2 error:(id *)a3;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 privacyCert:(id)a4 error:(id *)a5;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyCert:(id)a3 error:(id *)a4;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyCert:(id)a3 error:(id *)a4;
- (void)setString:(id)a0 privacyCert:(id)a1 error:(id *)a2;
- (void)setItems:(id)a0 options:(id)a1 privacyCert:(id)a2 error:(id *)a3;
- (void)setItems:(id)a0 privacyCert:(id)a1 error:(id *)a2;
- (void)getPasteboardContentWithCert:(id)a0 completion:(id /* block */)a1;
- (void)getPasteboardContentWithCert:(id)a0 isNeedConsumeRepeatedly:(BOOL)a1 completion:(id /* block */)a2;
- (id)createSKStoreWithCert:(id)a0 error:(id *)a1;
- (void)requestAccessCameraWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAccessCameraWithPrivacyHybridCert:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)startRunningWithCaptureSession:(id)a0 privacyCert:(id)a1 error:(id *)a2;
- (void)stopRunningWithCaptureSession:(id)a0 privacyCert:(id)a1 error:(id *)a2;
- (id)IESLivePrivacyCert:(id)a0;
- (void)openURL:(id)a0 withHybridCert:(id)a1 context:(id)a2 error:(id *)a3;
- (void)openURL:(id)a0 withHybridCert:(id)a1 context:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)jumpSystemNotification;
- (void)setString:(id)a0 privacyHybridCert:(id)a1 context:(id)a2 error:(id *)a3;
- (void)getPasteboardContentWithHybridCert:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyHybridCert:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (long long)authorizationStatusForEntityType:(unsigned long long)a0 privacyHybridCert:(id)a1 context:(id)a2 error:(id *)a3;
- (id)calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyHybridCert:(id)a2 context:(id)a3 error:(id *)a4;
- (id)eventsMatchingPredicate:(id)a0 eventStore:(id)a1 privacyHybridCert:(id)a2 context:(id)a3 error:(id *)a4;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 privacyHybridCert:(id)a4 context:(id)a5 error:(id *)a6;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyHybridCert:(id)a3 context:(id)a4 error:(id *)a5;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyHybridCert:(id)a3 context:(id)a4 error:(id *)a5;
- (void)requestUserNotificationsAuthorizationWithOptions:(unsigned long long)a0 privacyHybridCert:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)checkPhotoLibraryPermissionWithCert:(id)a0 context:(id)a1 options:(id)a2 completionBlock:(id /* block */)a3;
- (void)checkPhotoLibraryPermissionWithCert:(id)a0 context:(id)a1 accessLevel:(long long)a2 completionBlock:(id /* block */)a3;
- (void)requestPhotoAlbumAuthorizationWithCert:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestPhotoAlbumAuthorizationWithCert:(id)a0 context:(id)a1 accessLevel:(long long)a2 completionHandler:(id /* block */)a3;
- (id)fetchAssetsWithLocalIdentifiers:(id)a0 options:(id)a1 cert:(id)a2 context:(id)a3 error:(id *)a4;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 cert:(id)a5 error:(id *)a6;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2 cert:(id)a3 error:(id *)a4;
- (void)registerChangeObserver:(id)a0 cert:(id)a1 error:(id *)a2;
- (BOOL)enableUserPrivacyApiWithPrivacyCert:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (long long)authorizationStatusForAccessLevel:(long long)a0;

@end

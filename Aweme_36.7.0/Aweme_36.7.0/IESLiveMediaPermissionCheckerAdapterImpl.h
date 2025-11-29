@class NSString;

@interface IESLiveMediaPermissionCheckerAdapterImpl : IESLiveBaseAdapter <IESLiveMediaPermissionCheckerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAudioPermissionWithMicCert:(id)a0 completion:(id /* block */)a1;
- (void)checkVideoPermissionWithMicCert:(id)a0 cameraCert:(id)a1 completion:(id /* block */)a2;
- (void)checkAudioPermissionWithMicCert:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end

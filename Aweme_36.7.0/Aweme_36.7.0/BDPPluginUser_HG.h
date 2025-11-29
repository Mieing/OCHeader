@class NSString, BDPUniqueID;

@interface BDPPluginUser_HG : BDPBridgeInstancePlugin <BDPPrivacyRegulationViewDelegate_HG> {
    BOOL _isHostLoginFinish;
    NSString *_gameOrientation;
}

@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickPrivacyView:(id)a0 type:(unsigned long long)a1;
- (void)getUserInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)tma_loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkSessionWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getUseDurationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)dealUserRelationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hostLoginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getHostInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_webviewGetPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_serviceGetPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAnonymousIdSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)transformErrorWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

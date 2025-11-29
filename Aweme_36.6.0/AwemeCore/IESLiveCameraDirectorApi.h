@class NSNumber;

@interface IESLiveCameraDirectorApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithRoomID:(id)a0;
- (void)fetchDeviceViewList:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchSwitchMultiView:(long long)a0 originViewId:(long long)a1 layoutConfig:(id)a2 completion:(id /* block */)a3;
- (void)fetchDeleteMultiView:(id)a0 targetViewId:(id)a1 completion:(id /* block */)a2;
- (void)fetchDeleteAllMultiView:(long long)a0 completion:(id /* block */)a1;
- (void)fetchDeviceConnectInvitation:(long long)a0 completion:(id /* block */)a1;
- (void)fetchDeviceHandshakeInfo:(id /* block */)a0;
- (void)fetchConnectDevice:(id /* block */)a0;
- (void)pingDirectorStatus:(id /* block */)a0;
- (void).cxx_destruct;

@end

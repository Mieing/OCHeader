@class NSString, NSMutableArray;

@interface DeviceILinkService : MMUserService <MMKernelExt, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *iLinkDevices;
@property (retain, nonatomic) NSMutableArray *privateILinkDevices;
@property (retain, nonatomic) NSMutableArray *publicILinkDevices;
@property (nonatomic) long long deviceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)restoreData;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onAuthOK;
- (void)refreshDataFromResp:(id)a0;
- (void)requestDeviceCount;
- (int)getDeviceCount;
- (int)getDeviceCountWithoutStorageDevice;
- (id)getILinkDevices;
- (id)getILinkDevicesForMsg:(id)a0;
- (BOOL)hasAvailableDeviceInMessageWrap:(id)a0;
- (BOOL)hasAvailableDeviceInType:(id)a0;
- (id)getPrivateILinkDevices;
- (id)getPublicILinkDevices;
- (void).cxx_destruct;

@end

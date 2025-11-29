@class NSString, WCDeviceAccountWCDB;

@interface WCDeviceAccountMgr : MMUserService <MMServiceProtocol> {
    WCDeviceAccountWCDB *m_devAccountDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getAllDeviceInfos;
- (BOOL)hasBoundDevice:(id)a0;
- (unsigned int)getBoundDeviceCount:(id)a0;
- (id)getAllDeviceInfosForUser:(id)a0;
- (id)getDeviceInfoForUser:(id)a0 AndDeviceId:(id)a1;
- (id)getDeviceInfoForDeviceType:(id)a0 AndDeviceId:(id)a1;
- (id)getDeviceInfoForMd5Str:(id)a0;
- (id)getDeviceInfoForDID:(long long)a0;
- (id)getM7Device;
- (BOOL)setDeviceInfo:(id)a0;
- (void)delDeviceAccountForUser:(id)a0;
- (void)delDeviceInfoForUser:(id)a0 AndDeviceId:(id)a1;
- (void)delDeviceInfoForDeviceType:(id)a0 AndDeviceId:(id)a1;
- (id)getAirKissDataForKey:(id)a0;
- (BOOL)setAirKissData:(id)a0 ForKey:(id)a1;
- (void).cxx_destruct;

@end

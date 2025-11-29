@class WCLanDeviceBaseKissLogic, NSString, WCLanDeviceData, NSMutableSet, NSMutableArray;

@interface WCLanDeviceMsgForwardMgr : MMUserService <WCLanDeviceKissLogicDelegate, MMServiceProtocol> {
    WCLanDeviceData *m_forwardData;
    NSMutableArray *m_currentDeviceList;
    NSMutableSet *m_deviceLanFlagCache;
    NSMutableSet *m_deviceMD5Set;
    NSMutableSet *m_deviceConnectFlagCache;
    WCLanDeviceBaseKissLogic *m_kissLogic;
    BOOL m_hasOperated;
    long long m_opScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initializeWithMessageWrap:(id)a0 OpScene:(long long)a1;
- (void)initializeWithTimeLineItem:(id)a0 mediaItem:(id)a1 OpScene:(long long)a2;
- (BOOL)hasAvailableDeviceInScene:(unsigned long long)a0;
- (BOOL)hasAvailableDeviceInMessageWrap:(id)a0;
- (BOOL)hasAvailableDeviceInTimeLineItem:(id)a0;
- (BOOL)hasAvailableDeviceWithData:(id)a0;
- (id)availableDevicesInCache;
- (BOOL)startScan;
- (BOOL)forwardToLanDevice:(id)a0;
- (BOOL)cancelForwarMessageToLanDevice:(id)a0;
- (BOOL)hasConnectTask;
- (void)stopScan;
- (void)stopAllLogic;
- (void)clearSelf;
- (void)boundDevicesFinalFeedBack;
- (void)onDeviceFound:(id)a0;
- (void)onKissDeviceWithDevice:(id)a0 errCode:(int)a1;
- (void)onKissDeviceProgressUpdate:(double)a0 device:(id)a1;
- (BOOL)isActive;
- (void).cxx_destruct;

@end

@class NSMutableArray;
@protocol WCDeviceWifiStateLogicDelegate;

@interface WCDeviceWifiStateLogic : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_devices;
}

@property (weak, nonatomic) id<WCDeviceWifiStateLogicDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)sendWCDeviceWifiStateSubscribe:(id)a0 ReqType:(unsigned int)a1;
- (int)getWCDeviceWifiState:(id)a0;
- (void)sendWCDeviceWifiStatusSubscribeForDeviceID:(id)a0 AndDeviceType:(id)a1 AndReqType:(unsigned int)a2;
- (void)handleWifiStateUpdateMsg:(id)a0;
- (void)handleWCDeviceWifiStateSubscribeResopnse:(id)a0;
- (BOOL)isDeviceSubscribing:(id)a0;
- (id)getSubscribingWithDeviceType:(id)a0 andDieviceID:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

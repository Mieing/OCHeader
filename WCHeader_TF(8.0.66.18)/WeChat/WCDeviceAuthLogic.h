@class NSMutableArray;
@protocol WCDeviceAuthLogicDelegate;

@interface WCDeviceAuthLogic : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_deviceInfos;
    int m_appState;
}

@property (weak, nonatomic) id<WCDeviceAuthLogicDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)willSuspend;
- (void)sendAuthReqToSvr:(id)a0 AuthBuffer:(id)a1;
- (id)getSessionBuffer:(long long)a0;
- (BOOL)setNeedAuth:(long long)a0;
- (BOOL)isDeviceAuthed:(long long)a0;
- (void)handleDeivceLost:(long long)a0;
- (id)__toNSString:(void *)a0 :(int)a1;
- (id)genAuthRespTask:(int)a0 DeviceID:(long long)a1 Seq:(unsigned short)a2 AESSessionKey:(id)a3;
- (void)handleDeviceAuthReq:(long long)a0 :(unsigned short)a1 :(unsigned short)a2 :(struct _MmBp__AuthRequest **)a3;
- (void)handleWCDeviceChannelStateChanged:(long long)a0 OldState:(int)a1 NewState:(int)a2;
- (void)__callbackEnd:(int)a0 DID:(unsigned long long)a1 RespTask:(id)a2 SessionKey:(id)a3;
- (void)__clearDeviceInfoByDeviceId:(long long)a0;
- (id)__findDeviceInfoByDid:(long long)a0;
- (id)__findDeviceInfoByDeviceID:(id)a0;
- (void)handleWCDeviceAuthResopnse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

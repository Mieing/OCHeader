@class ShakePeopleLogicController, ShakeMusicLogicController;
@protocol ShakeLogicProxyDelegate;

@interface ShakeLogicProxy : MMObject <ShakeMgrExt> {
    long long m_logicType;
    id<ShakeLogicProxyDelegate> m_delegate;
    ShakePeopleLogicController *m_shakePeopleLogic;
    ShakeMusicLogicController *m_shakeMusicLogic;
}

- (long long)GetLogicTypeFromStatus;
- (void)onShakePeopleStorageChanged;
- (void)onShakeStatusChanged;
- (void)onShakePageStorageChanged;
- (void)OnShakeShareCountChanged;
- (void)onShakeMusicStorageChanged;
- (id)initWithDelegate:(id)a0;
- (long long)getShakeLogicType;
- (BOOL)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)a0;
- (void)updateShakeLocation;
- (void)SetShakeList:(id)a0 andScene:(unsigned int)a1;
- (void).cxx_destruct;

@end

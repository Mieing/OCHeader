@class NSString;
@protocol WCAccountGraphicVerifyControlLogicDelegate;

@interface WCAccountGraphicVerifyControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyViewControllerDelegate, PBMessageObserverDelegate> {
    BOOL m_bFromManualAuth;
    id<WCAccountGraphicVerifyControlLogicDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isGraphicVerifyError:(id)a0;

- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)parseImg;
- (void)stopLogic;
- (void)startLogicFromManualAuth:(BOOL)a0;
- (BOOL)startAuth:(id)a0;
- (void)onGraphicVerifyWithVerifyCode:(id)a0;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCPayPayMoneyFromBrandContactLocalViewLogic : WCPayPayMoneyLogic <MMUseCaseCallback> {
    NSString *m_nsHandleURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)SetHandleURL:(id)a0;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OrderDetailAdd:(id)a0;
- (void)OrderDetailPay:(id)a0;
- (void)OrderDetailBack;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Title:(id)a2 HeadTip:(id)a3;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2;
- (id)gotoViewController:(Class)a0 withData:(id)a1;
- (void)OnHandleWCPayURL:(id)a0 Error:(id)a1;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end

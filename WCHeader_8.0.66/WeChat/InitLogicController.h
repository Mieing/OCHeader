@class NSString, MMTimer, ContactInitLogic;
@protocol initLogicControllerDelegate;

@interface InitLogicController : MMObject <ContactInitLogicExt, INewInitExt> {
    MMTimer *m_percenTimer;
    unsigned int m_curPercent;
    unsigned int m_uiEventID;
    ContactInitLogic *m_contactInitLogic;
}

@property (weak, nonatomic) id<initLogicControllerDelegate> m_delegate;
@property (readonly, nonatomic) BOOL m_bIsIniting;
@property (nonatomic) BOOL m_bFromReg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isNeedInit;
- (BOOL)initInternal;
- (unsigned int)getCurNetworkStatus;
- (void)percentIniting;
- (void)onPercentTimer;
- (void)startPercentTimer;
- (void)stopPercentTimer;
- (BOOL)startInit;
- (void)appFirstBecomeActive;
- (void)stopIniting:(unsigned int)a0;
- (void)onNewInitConnectFail;
- (void)onNewInitFail;
- (void)onNewInitOK;
- (void)tryInitContact;
- (void)retryInitContact;
- (void)onContactInitProcessUpdate:(unsigned int)a0;
- (void)onContactInitFail;
- (void)onContactInitSuccess;
- (void).cxx_destruct;

@end

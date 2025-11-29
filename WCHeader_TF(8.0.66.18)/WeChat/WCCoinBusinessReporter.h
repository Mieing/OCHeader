@class NSString, WCFinderLiveEncashReporter, WCFinderLiveBeanReporter, WCFinderLiveCoinReporter;

@interface WCCoinBusinessReporter : NSObject <IWCCoinBusinessReporterCallback, WCSessionFlowMonitorExt> {
    BOOL m_isInCoinDetail;
    BOOL m_isInComplete;
    WCFinderLiveCoinReporter *m_coinReporter;
    WCFinderLiveEncashReporter *m_encashReporter;
    WCFinderLiveBeanReporter *m_beanReporter;
    long long m_rechargeScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindCoinViewInfo:(id)a0 priceInfo:(id)a1;

- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onEnterPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onQuitPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onAppearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onDisappearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onViewOperation:(id)a0 withViewId:(id)a1;
- (void)onCoinDeatilLinkClick;
- (void)onFetchMoneyLinkClick;
- (void)onStartBuyCoinLogic:(long long)a0;
- (void)onGesture:(id)a0 withTarget:(id)a1 withAction:(id)a2;
- (void)onSendEvent:(id)a0;
- (long long)getCoinScene;
- (BOOL)needMonitorConrtol;
- (void).cxx_destruct;

@end

@class AWEPaidAuthConfig, NSString, NSDictionary, AWEPaidStreamIAAUnlockManager, AWEPaidStreamLoadingView, BDARVSourceModel, AWEPaidStreamTimeRecorder;
@protocol AWEPaidPaymentDelegate;

@interface AWEPaidStreamIAAPayment : AWEPaidStreamPayment <AWERewardVideoProtocol, AWEPaidIAAPayment>

@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *textAfterUnlock;
@property (nonatomic) long long loadedCount;
@property (nonatomic) long long currentWatchCount;
@property (nonatomic) BOOL hasOpened;
@property (retain, nonatomic) AWEPaidStreamIAAUnlockManager *unlockManager;
@property (retain, nonatomic) AWEPaidStreamLoadingView *loadingView;
@property (copy, nonatomic) NSString *openRewardContainerEntrance;
@property (nonatomic) BOOL needOpenAfterDataReady;
@property (retain, nonatomic) BDARVSourceModel *preloadSourceModel;
@property (retain, nonatomic) AWEPaidStreamTimeRecorder *timeRecorder;
@property (copy, nonatomic) NSString *ceUniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEPaidPaymentDelegate> delegate;
@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)lynxViewDidFirstScreen:(id)a0;
- (id)initWithAuthConfig:(id)a0;
- (void)videoAd:(id)a0 becomeEffectiveWithInfos:(id)a1 index:(long long)a2;
- (void)videoAd:(id)a0 moreRewardDisplayInfoIndex:(long long)a1 callBack:(id /* block */)a2;
- (BOOL)isPaying;
- (void)resetLoadingView;
- (void)createUniqueKey;
- (void)openRewardVideoContainer;
- (void)previewDidFinished;
- (void)paymentDidUpdateAuthItems;
- (void)goToPayForPaidAuthItem:(id)a0 paymentType:(long long)a1 extraParameters:(id)a2;
- (void)monitorWithEventName:(id)a0 parameters:(id)a1;
- (void)loadRewardVideoWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (void)openRewardVideoContainerIfEnableWithExtraInfo:(id)a0;
- (id)sourceModelWithPaidAuthItem:(id)a0;
- (void)traceWithEventName:(id)a0 parameters:(id)a1;
- (void)reportOpenRewardVideoRequest:(BOOL)a0;
- (id)retentionModelWithAwardUIConfig:(id)a0;
- (id)closeButtonModelWithAuthItem:(id)a0;
- (id)playletSendIaaParamsOutDictionary;
- (BOOL)shouldShowGrowthReward;
- (long long)paidStreamLoadScene;
- (void)unlockCurrentAwardConfigInfo:(id)a0 index:(long long)a1;
- (id)oneMoreModelWithRewardChargeInfo:(id)a0;
- (void)iaaTrackWithName:(id)a0 params:(id)a1;
- (id)getRequestInfoExtraDic:(id)a0;
- (void).cxx_destruct;
- (long long)paymentType;
- (long long)scene;
- (void)setup;
- (void)addLoadingView;

@end

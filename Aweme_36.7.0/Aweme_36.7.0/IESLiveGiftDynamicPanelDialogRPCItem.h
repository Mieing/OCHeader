@class NSString, RACReplaySubject, NSMutableSet, IESLiveGiftPanelDataSharing;
@protocol IESLiveSubscription, IESLiveDynamicGiftPanelOperationVisibilityService, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftDynamicPanelDialogRPCItem : NSObject <IESLiveAioLinkGiftDialogService, IESLiveRefactGiftPanelEventAction, IESLiveGiftDynamicPanelItemProtocol>

@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) RACReplaySubject *currentSearchVisiblePublisher;
@property (retain, nonatomic) RACReplaySubject *currentOperationVisiblePublisher;
@property (retain, nonatomic) RACReplaySubject *currentSelectedGiftPublisher;
@property (retain, nonatomic) RACReplaySubject *currentSelectedInfoPublisher;
@property (retain, nonatomic) RACReplaySubject *currentSelectedPagePublisher;
@property (retain, nonatomic) RACReplaySubject *smallGiftComboPublisher;
@property (retain, nonatomic) RACReplaySubject *clientAIInfoPublisher;
@property (retain, nonatomic) RACReplaySubject *currentSelectStatusPublisher;
@property (retain, nonatomic) id<IESLiveSubscription> currentSelectedGiftSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> groupModeSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> pageExtraSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> giftPageTypeSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> comboShowingSubscription;
@property (weak, nonatomic) id<IESLiveDynamicGiftPanelOperationVisibilityService> dynamicPanelService;
@property (retain, nonatomic) NSMutableSet *reporedTab;
@property (nonatomic) BOOL enableLynxPerformanceLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_giftOperationChangeToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)gpe_rebornDynamicGiftPanelEnterSearch:(BOOL)a0;
- (id)requirePanelGiftList:(id)a0;
- (id)observeSelectedGift;
- (id)observeSelectedPageWithExtraPbDefinition:(id)a0 extraFqName:(id)a1;
- (id)observeSmallGiftCombo;
- (id)observeClientAIInfoById:(long long)a0;
- (id)observeCurrentSelectStatus;
- (id)observeSelectedInfo:(id)a0 fqName:(id)a1;
- (id)lynxData;
- (void)dismissGiftDialog:(id)a0;
- (void)locateGiftByConfig:(id)a0;
- (void)updateGiftExtraInfoById:(id)a0;
- (void)updatePanelDataSharing:(id)a0;
- (void)changeDialogHeight:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)observeTopViewVisible;
- (id)observeSearchVisible;
- (void)sendGiftSpeedLog:(id)a0;
- (void)currentSelectedGiftChangedWith:(id)a0;
- (void)sendCurrentSelectStatus;
- (void)disposeGroup;
- (void)sendCurrentSelectedPage;
- (void)currentSelectedPageChangedWith:(id)a0;
- (void)sendSearchVisible;
- (void)sendCurrentSelectInfo;
- (void)sendSelectedGift;
- (void)sendClientClientAIInfoWithId:(long long)a0;
- (void)sendCurrentOperationVisible:(BOOL)a0;
- (void)onLynxLoadedNew:(id)a0;
- (void)trackShowEvent:(long long)a0;
- (void)trackReceiverListShow;
- (void)sendLog:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (void)dispose;
- (void)dealloc;

@end

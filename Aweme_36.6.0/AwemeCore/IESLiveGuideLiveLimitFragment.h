@class BDXBridgeEventSubscriber, TopAreaComponent_AudienceLimitSubComponent, NSString;

@interface IESLiveGuideLiveLimitFragment : IESLiveGuideComponent <IESLiveGuideLiveLimitInterface, IESLiveGuidePaidVisibleEvent>

@property (retain, nonatomic) TopAreaComponent_AudienceLimitSubComponent *audienceCntLimitModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *audienceCntLimitSubscriber;
@property (copy, nonatomic) id /* block */ updateAudienceCntLimitTitleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)openAudienceExemptionPageWithCompletion:(id /* block */)a0;
- (void)changeGuidePaidLiveStatus:(BOOL)a0;
- (long long)audienceMaxCnt;
- (id)audienceMaxCntLimitText;
- (id)audienceCntLimitTitle;
- (BOOL)shouldHideEntry;
- (void)openAudienceCntLimitSettingPage;
- (void)addAudienceCntLimitSubscriber;
- (void)removeAudienceCntLimitSubscriber;
- (void)updateAudienceCntLimitTitleView;
- (void)syncAudienceCntLimitModelWithParams:(id)a0;
- (void)updateVisibleScopeEntryView;
- (void).cxx_destruct;

@end

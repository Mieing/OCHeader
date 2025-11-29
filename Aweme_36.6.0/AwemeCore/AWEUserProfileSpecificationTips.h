@class AWEUserProfileSpecificationBottomTipView, NSString, NSMutableDictionary, AWEUserProfileSpecificationTipsModel;

@interface AWEUserProfileSpecificationTips : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSString *useID;
@property (retain, nonatomic) AWEUserProfileSpecificationTipsModel *tipsModel;
@property (retain, nonatomic) NSMutableDictionary *tipModelsDict;
@property (weak, nonatomic) AWEUserProfileSpecificationBottomTipView *bottomTipView;
@property (nonatomic) BOOL isRefreshing;
@property (copy, nonatomic) id /* block */ viewDidAppear;
@property (copy, nonatomic) id /* block */ publishGuideTipViewDidAppear;
@property (copy, nonatomic) id /* block */ refreshCompletionBlock;
@property (nonatomic) BOOL hasRequested;
@property (nonatomic) BOOL isTipsShowOnlyBackFromSidebar;
@property (nonatomic) BOOL isHitExitOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (id)postContributionGuideTipModel;
- (BOOL)shouldShowPublishGuideWithProfileContext:(id)a0;
- (void)removePostContributionGuideWith:(id)a0;
- (unsigned long long)bottomTipStatus;
- (id)bottomTipViewWith:(id)a0 bottomOffset:(double)a1;
- (void)refreshPostContributionGuideWith:(id)a0 completion:(id /* block */)a1;
- (void)showPostContributionGuideWith:(id)a0;
- (void)refreshPostContributionGuideWith:(id)a0 transparentTransmissionData:(id)a1 completion:(id /* block */)a2;
- (void)actionPostContributionGuideWith:(id)a0 needRemove:(BOOL)a1;
- (void)closePostContributionGuideWith:(id)a0;
- (void)showPostContributionGuide;
- (void)p_loadSpecificationWithTips:(id)a0;
- (id)p_tipKeyWith:(id)a0;
- (void)p_postContributionGuideTipWith:(id)a0 actionType:(long long)a1 needRemove:(BOOL)a2;
- (void)p_loadSpecificationWithTips:(id)a0 completion:(id /* block */)a1;
- (void)p_loadSpecificationWithTips:(id)a0 transparentTransmissionData:(id)a1 completion:(id /* block */)a2;
- (id)pvDataWith:(id)a0;
- (id)p_tipParamsWith:(id)a0 transparentTransmissionData:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

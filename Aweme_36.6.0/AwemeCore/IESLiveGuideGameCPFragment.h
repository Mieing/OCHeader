@class IESLiveGuideGameCPApi, NSString, IESLiveGuideGameCPViewModel, IESLiveGuideGameCPTraceModel, IESLiveGuideToolBarItem;

@interface IESLiveGuideGameCPFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideGameCPRouter, IESLiveGuideToolBarAction>

@property (retain, nonatomic) IESLiveGuideGameCPViewModel *viewModel;
@property (retain, nonatomic) IESLiveGuideToolBarItem *guideToolBarItem;
@property (retain, nonatomic) IESLiveGuideGameCPApi *api;
@property (nonatomic) BOOL didAddGuideToolBarItemWithStatus;
@property (retain, nonatomic) IESLiveGuideGameCPTraceModel *guideTraceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)toolbarItemReloadFinished;
- (id)getTrackParamsWithItem:(id)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)anchorApplyAuthority2PromoteWithAnchorID:(id)a0 status:(id)a1;
- (void)anchorDidChangePromoteWithGames:(id)a0;
- (BOOL)originalLiveGuideGamePromotionStatus;
- (void)addGuideToolBarItem;
- (id)gameCPAnchorPromoteCenterULR;
- (void)traceMonitorPromoteStepType:(unsigned long long)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (void)updateGuideItemWithStatus:(long long)a0;
- (void)updateGuideItemWithHasPromotionGame:(BOOL)a0;
- (void)jumpToNextPageOldLogic;
- (void)jumpToPropsPromotionProtocolPage;
- (void)jumpToTalentCenterPage;
- (void)gameDetailDidChangePromoteStatus:(id)a0;
- (void)performShowBubbleMessage;
- (void)showBubbleMessage;
- (void)dismissBubbleMessage;
- (void)performDismissBubbleMessage;
- (id)gameCPAnchorIntroBackgroundURL;
- (void)openPromoteGamesWithIsFirstPromote:(BOOL)a0;
- (id)gameCPAnchorPropsPromotionProtocolURL;
- (id)gameCPTalentCenterURL;
- (id)gameCPAnchorPromoteHalfPageURL;
- (id)p_commonLocalSchemaUIStyleParams;
- (id)gameCPAnchorMineURL;
- (id)p_commonSchemaURLParamsWithFirstPromote:(BOOL)a0;
- (void)showIntroducePanel;
- (void).cxx_destruct;
- (void)addObservers;

@end

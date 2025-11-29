@class HTSEventContext, NSString, IESLiveGuideGameCPApi, RACSubject, IESLiveGuideModel, NSArray, IESLiveGuideGameCPBubbleModel, IESLiveGuideGameCPModel;

@interface IESLiveGuideGameCPViewModel : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *room;
@property (retain, nonatomic) IESLiveGuideGameCPApi *api;
@property (retain, nonatomic) IESLiveGuideGameCPModel *guideModel;
@property (retain, nonatomic) NSArray *propsGameIDs;
@property (nonatomic) BOOL originalPromotingValue;
@property (copy, nonatomic) NSString *promotionPageUrl;
@property (nonatomic) long long containerType;
@property (nonatomic) BOOL shouldShowPropsProtocol;
@property (nonatomic) long long anchorStatus;
@property (nonatomic) BOOL hasPromotingGames;
@property (nonatomic) BOOL isShowIntroduce;
@property (nonatomic) BOOL hasPropPermission;
@property (nonatomic) BOOL isAgreePropProtocol;
@property (readonly, nonatomic) BOOL isPromotionGamesHasProps;
@property (retain, nonatomic) RACSubject *addGuideToolBarItemSubject;
@property (retain, nonatomic) RACSubject *updateGuideItemSubject;
@property (retain, nonatomic) RACSubject *jumpToNextPageSubject;
@property (retain, nonatomic) RACSubject *updatePromotingGamesSubject;
@property (retain, nonatomic) RACSubject *traceEventReportSubject;
@property (retain, nonatomic) IESLiveGuideGameCPBubbleModel *bubbleModel;

- (id)initWithRoom:(id)a0 trackContext:(id)a1 diContext:(id)a2;
- (void)anchorApplyAuthority2PromoteWithAnchorID:(id)a0 status:(id)a1;
- (void)guideToolBarDidClicked;
- (id)defaultContainerConfig;
- (void)updateAnchorPromoteWithModel:(id)a0;
- (void)updateAnchorPromoteStatus:(BOOL)a0;
- (void)trackGuideItemWithEventName:(id)a0 source:(id)a1;
- (void)trackGuideItemEventWithEventName:(id)a0;
- (void)monitorGameCPWithStatus:(int)a0 errorCode:(id)a1 isServerApi:(BOOL)a2;
- (unsigned long long)currentJumpToNextPageType;
- (void)bubbleDidShowed;
- (void)trackIntroPanelWithEventName:(id)a0;
- (id)fetchEnablePromotionPageUrl;
- (id)containerStyleSchemaParams;
- (void)updateAnchorPromoteWithParamModel:(id)a0;
- (BOOL)originalPromotionStatus;
- (void)traceAnchorDidChangePromoteWithGames:(id)a0 isSuccess:(BOOL)a1;
- (void)fetchAnchorPromoteStatus:(BOOL)a0;
- (void)fetchPromotionGamesPropsInfo;
- (void)reportGamePromotionPageUrlFailTrack;
- (void)fetchAnchorPromoteStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchTalentEntrance;
- (void)updateAnchorPromoteStatusWithGameExtraInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

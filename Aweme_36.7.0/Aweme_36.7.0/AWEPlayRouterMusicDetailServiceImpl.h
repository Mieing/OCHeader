@class AWEPlayInteractionViewController, NSString, AWEDetailManager, AWEAwemeModel, NSDictionary;

@interface AWEPlayRouterMusicDetailServiceImpl : NSObject <AWEPlayRouterMusicDetailServiceProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPlayInteractionViewController *interactionController;
@property (retain, nonatomic) AWEDetailManager *detailManager;
@property (nonatomic) double playerAudioEffectTargetLoudnessForPlayer;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) unsigned long long feedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)serverPreconditionEnterMusicDetailWithToastString:(id *)a0;
- (void)routerMusicDetailWithRouterDict:(id)a0 musicModel:(id)a1 enterSimilarDetailPage:(BOOL)a2;
- (void)addClickSearchResultVideoTrackForParams:(id)a0;
- (id)canEnterSimilarMusicDetailPage;
- (id)musicOriginalOfflineDescString;
- (BOOL)canEnterMusicDetailCommonCondition;
- (id)getAwemeModelFromCandidateClip:(id)a0;
- (void)trackEnterMusicDetailFailed:(id)a0;
- (BOOL)preconditionEnterMusicDetailWithToastString:(id *)a0;
- (void)interactorOnEnterMusicDetail:(id)a0 repostParams:(id)a1;
- (id)realModel;
- (void).cxx_destruct;

@end

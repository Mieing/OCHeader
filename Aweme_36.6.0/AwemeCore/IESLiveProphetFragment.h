@class IESLiveProphetCountdownView, NSString, IESLiveProphetStore;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveProphetFragment : IESLiveRoomComponent <IESLiveProphetCountDownProvider, IESLiveAudienceMoreToolsTempStateAreaActions, IESLiveProphetRouter>

@property (retain, nonatomic) IESLiveProphetStore *store;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveProphetCountdownView *countdownView;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (nonatomic) BOOL hasProcessingQuiz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)addToolbarItemWith:(id)a0;
- (BOOL)anchorHasUnresolvedProphet;
- (void)alterAnchor2ResolveProphet;
- (BOOL)prophetEnable;
- (void)prepareStartProphetWithEnter:(id)a0;
- (id)prophetCountdownView;
- (void)trackAudienceProphetEntranceShow:(id)a0;
- (void)checkCountdownService;
- (void)checkLandscapeMode;
- (id)toolbarItemWith:(id)a0;
- (void)trackAudienceProphetMainEntranceShow:(id)a0;
- (void)trackAudienceProphetMainEntranceClick:(id)a0;
- (void)prepareStartProphetWithEnter:(id)a0 completion:(id /* block */)a1;
- (void)checkCountdownServiceWithMsgQuiz:(id)a0 roomQuiz:(id)a1 now:(long long)a2;
- (long long)minDurationFromQuizInfos:(id)a0 now:(long long)a1;
- (long long)minDurationFromQuizModels:(id)a0 now:(long long)a1;
- (void)showProphet:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end

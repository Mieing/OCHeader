@class AWELiveMultiInteractListModel, RACDisposable, RACBehaviorSubject, NSString, IESLiveModalDialog, IESLiveKTVPreStreamContext;

@interface AWELivePreStreamSocialElement : AWELiveBusinessBaseElement <AWELivePreStreamEnterRoomDataProvider, IESLiveInteractionAsyncResourceLoader, AWELivePreStreamBusinessCoreDataProtocol>

@property (nonatomic) long long isInTeamFight;
@property (nonatomic) BOOL isInGuestBallte;
@property (nonatomic) long long isInRoomBallte;
@property (retain, nonatomic) IESLiveModalDialog *modalDialog;
@property (nonatomic) BOOL isFetchingInteractList;
@property (retain, nonatomic) AWELiveMultiInteractListModel *interactListModel;
@property (retain, nonatomic) IESLiveKTVPreStreamContext *ktvPreStreamContext;
@property (retain, nonatomic) RACBehaviorSubject *asyncResourceLoaderSubject;
@property (retain, nonatomic) RACDisposable *asyncResourceLoaderDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (id)provideCoreDataForEvent:(long long)a0;
- (void)viewController_endDecelerating;
- (void)updateInteractListWithScene:(unsigned long long)a0 enterFrom:(unsigned long long)a1 extra:(id)a2;
- (long long)p_isInTeamFightForTrack;
- (void)asyncLoadResourceUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;

@end

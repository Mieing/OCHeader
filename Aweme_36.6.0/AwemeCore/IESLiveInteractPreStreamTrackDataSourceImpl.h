@class HTSLiveUser, IESLiveFullLinkMonitorImp, NSString, IESLiveMultiUserScenarioMonitorImpl, IESLiveInteractionLayout;
@protocol IESLiveRoomService;

@interface IESLiveInteractPreStreamTrackDataSourceImpl : NSObject <IESLiveInteractTrackDataSource>

@property (retain, nonatomic) IESLiveMultiUserScenarioMonitorImpl *multiUserScenarioMonitorImpl;
@property (retain, nonatomic) IESLiveFullLinkMonitorImp *innerMonitorImpl;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) HTSLiveUser *anchor;
@property (weak, nonatomic) HTSLiveUser *currentUser;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double startTime;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) double enterPreStreamStartTime;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (nonatomic) BOOL isFromPreLoad;
@property (nonatomic) double preloadStartTime;
@property (nonatomic) BOOL isPreLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)currentPlayModes;
- (id)innerMonitor;
- (BOOL)isPrestreamView;
- (id)multiUserScenarioMonitor;
- (id)initWithDiContext:(id)a0 withRoom:(id)a1 anchor:(id)a2;
- (void).cxx_destruct;

@end

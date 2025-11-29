@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractTrackDataSourceImpl : NSObject <IESLiveInteractTrackDataSource>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isFromPreLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)preloadStartTime;
- (BOOL)isPreLoading;
- (id)currentPlayModes;
- (id)innerMonitor;
- (BOOL)isPrestreamView;
- (id)multiUserScenarioMonitor;
- (void).cxx_destruct;
- (id)currentUser;
- (id)currentLayout;
- (id)anchor;

@end

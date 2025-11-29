@class NSArray;

@interface IESLiveAnchorBizPluginModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) NSArray *plugins;
@property (retain, nonatomic) NSArray *pluginSubscribeMessageTokens;

- (void)didSetAttachingDIContext;
- (void)bindService;
- (void)liveRoomWillDealloc;
- (void)liveRoomDidAppear;
- (void)liveRoomDidDisappear;
- (void)liveRoomWillAppear;
- (void)liveRoomWillDisappear;
- (void)setupPlugins:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end

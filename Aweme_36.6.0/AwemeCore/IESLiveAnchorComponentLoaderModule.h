@class IESLiveComponentBootLoader, NSString;

@interface IESLiveAnchorComponentLoaderModule : IESLiveAnchorExecutionModule <IESLiveComponentLifeCycleNotifier, IESLiveAnchorComponentProtocol, HTSLiveHideComponentAction>

@property (retain, nonatomic) IESLiveComponentBootLoader *componentLoader;
@property (nonatomic) BOOL needHideAllComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllComponent;
- (void)showAllComponent;
- (void)showComponents;
- (void)bindService;
- (void)componentDestroyDidFinishForLevel:(long long)a0;
- (void)componentFirstFrameDidStartLoad;
- (void)componentFirstFrameDidFinishWithCost:(double)a0;
- (id)subscribeMessages;
- (BOOL)couldUnInstallAtLeastPriority:(long long)a0;
- (void)liveRoomDidAppear;
- (void)liveRoomDidDisappear;
- (void)liveRoomWillAppear;
- (void)liveRoomWillDisappear;
- (void)registerBootCompletion;
- (void)handleLiveRoomWillClose;
- (void).cxx_destruct;
- (void)setup;

@end

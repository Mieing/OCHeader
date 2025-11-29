@protocol IESLiveGeneralService;

@interface IESLiveAnchorGeneralServiceModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) id<IESLiveGeneralService> generalServiceManager;

- (void)liveRoomWillDealloc;
- (void).cxx_destruct;
- (void)setup;

@end

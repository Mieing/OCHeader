@class IESLiveLGameLifeCycleService;

@interface IESLiveLGameCommonFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveLGameLifeCycleService *lifeCycleService;

- (void)componentMount;
- (void)componentUnmount;
- (void)_loadLifeCycleService;
- (void)_unloadLifeCycleService;
- (void).cxx_destruct;

@end

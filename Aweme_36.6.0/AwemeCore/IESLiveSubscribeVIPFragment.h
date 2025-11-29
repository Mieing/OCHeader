@class IESLiveSubscribeVIPStore;

@interface IESLiveSubscribeVIPFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveSubscribeVIPStore *store;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentRefresh;
- (void)openMediaContainerSecureContent:(BOOL)a0;
- (BOOL)shouldOpenMediaContainerSecureContent;
- (void).cxx_destruct;

@end

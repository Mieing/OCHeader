@interface IESLiveSubscribeVIPNewSwiftFragment : IESLiveRoomComponent {
    void /* unknown type, empty encoding */ store;
}

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
- (id)init;

@end

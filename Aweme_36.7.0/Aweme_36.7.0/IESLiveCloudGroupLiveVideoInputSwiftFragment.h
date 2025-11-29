@interface IESLiveCloudGroupLiveVideoInputSwiftFragment : IESLiveRoomComponent <BDXContainerLifecycleProtocol> {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ containerId;
    void /* unknown type, empty encoding */ viewModel;
}

+ (BOOL)componentShouldActive:(id)a0;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)componentBindService;
- (void)componentUnmount;
- (void)updateViewSizeAndVideoInput:(struct CGSize { double x0; double x1; })a0;
- (void)processedInputView:(id)a0 :(double)a1 :(double)a2 :(double)a3;
- (void)removeLynxViewVideoInput;
- (long long)getNtpDiffTime;
- (void).cxx_destruct;
- (id)init;

@end

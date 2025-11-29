@class IESLiveVideoCaptureViewModel;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveVideoCaptureFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveVideoCaptureViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessProvider;

- (void)componentCreate;
- (void)componentUnmount;
- (void).cxx_destruct;

@end

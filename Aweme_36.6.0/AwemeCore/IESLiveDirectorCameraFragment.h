@class IESLiveDirectorCameraView;

@interface IESLiveDirectorCameraFragment : IESLiveDirectorComponent

@property (retain, nonatomic) IESLiveDirectorCameraView *cameraView;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)toggleReversed;
- (void)setupCameraView;
- (double)cameraItemBottomOffset;
- (void).cxx_destruct;

@end

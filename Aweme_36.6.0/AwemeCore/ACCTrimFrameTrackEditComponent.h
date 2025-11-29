@class ACCAdvanceEditMainTrackView, AWEVideoPublishViewModel;

@interface ACCTrimFrameTrackEditComponent : ACCTrimCropBaseComponent

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) ACCAdvanceEditMainTrackView *mainTrackView;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (id)serviceBinding;
- (void)componentDidLoad;
- (void)setupFrameUI;
- (void).cxx_destruct;

@end

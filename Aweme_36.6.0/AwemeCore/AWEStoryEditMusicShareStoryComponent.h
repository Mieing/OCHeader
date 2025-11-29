@class AWEStoryEditMusicShareStoryViewModel;

@interface AWEStoryEditMusicShareStoryComponent : ACCFeatureComponent

@property (retain, nonatomic) AWEStoryEditMusicShareStoryViewModel *viewModel;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)updateClipDuration:(double)a0 range:(struct _HTSAudioRange { double x0; double x1; })a1;
- (void).cxx_destruct;

@end

@class AWECoverNLEEditorBottomSwitchViewModel, UIView, AWECoverEditorNLEEditorInputData, UIButton;
@protocol ACCEditViewContainer, AWECoverEditorNLEEditorLayoutManager;

@interface AWEVideoCoverEditorBottomSwitchComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIButton *templateButton;
@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) AWECoverNLEEditorBottomSwitchViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<AWECoverEditorNLEEditorLayoutManager> layoutManager;
@property (retain, nonatomic) AWECoverEditorNLEEditorInputData *inputData;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)trackCoverEnterTabWithTabName:(id)a0;
- (void)updateSelectButton;
- (void)templateButtonDidClick;
- (void)textButtonDidClick;
- (void).cxx_destruct;
- (void)setupViews;

@end

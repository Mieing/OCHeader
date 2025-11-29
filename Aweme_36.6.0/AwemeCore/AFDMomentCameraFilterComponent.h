@class UILabel, NSString, UIView, UIScrollView, AFDMomentCameraFilterViewModel;
@protocol AFDMomentCameraFlowService;

@interface AFDMomentCameraFilterComponent : AFDMomentCameraBaseComponent <UIScrollViewDelegate, AFDMomentCameraFlowServiceSubscriber>

@property (retain, nonatomic) AFDMomentCameraFilterViewModel *viewModel;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIScrollView *filterScrollView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) UIView *filterContainerView;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)p_adjustScrollView:(id)a0;
- (void)componentDidLayoutSubviews;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end

@class UIView;

@interface ACCRecordSplitTipComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *view;

- (void)componentDidAppear;
- (void)componentWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)preferredLoadPhase;
- (void)checkSplitStatus;
- (void)createViewIfNeed;
- (void)clickCloseBtn:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSplitting;

@end

@class AFDStoryGradientConfig;

@interface AFDSkylightCellColorRingPresenter : AFDSkylightBasePresenter

@property (retain, nonatomic) AFDStoryGradientConfig *config;

- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSize;
- (void).cxx_destruct;
- (id)createView;

@end

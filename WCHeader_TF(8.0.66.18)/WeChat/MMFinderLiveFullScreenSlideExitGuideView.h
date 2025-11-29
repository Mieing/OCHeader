@class PAGView, MMUILabel;

@interface MMFinderLiveFullScreenSlideExitGuideView : UIView

@property (retain, nonatomic) PAGView *guideAnimatedView;
@property (retain, nonatomic) MMUILabel *guideLabel;

- (void)updateLayout;
- (void)createGuidePAGViewIfNeeded;
- (void)createGuideLabelIfNeeded;
- (id)loadLocalPAGFile;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

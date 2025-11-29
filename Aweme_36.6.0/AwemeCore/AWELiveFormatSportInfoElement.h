@class UILabel, UIView;

@interface AWELiveFormatSportInfoElement : AWELiveTopElement

@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UILabel *infoText;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)p_topOffSet;
- (void)showScoreViewIfNeed;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

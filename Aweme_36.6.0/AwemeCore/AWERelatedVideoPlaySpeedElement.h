@class UIButton;

@interface AWERelatedVideoPlaySpeedElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIButton *speedButton;

- (void)initializeElement;
- (void)bindEvent;
- (void)updatePlaySpeed:(double)a0;
- (void)updateSpeedButtonForLongPressPanelOpti:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

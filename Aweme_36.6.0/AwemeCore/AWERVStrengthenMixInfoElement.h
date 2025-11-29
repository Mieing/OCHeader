@class AWERVExposedMixInfoView;

@interface AWERVStrengthenMixInfoElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWERVExposedMixInfoView *exposedMixInfoView;

- (id)noNeedSimultaneouslyGestureView;
- (BOOL)shouldMixInfoElementAppearWithModel:(id)a0;
- (double)getElementHeight;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end

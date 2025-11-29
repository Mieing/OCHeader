@class AWERVLongPressSpeedViewModel;

@interface AWERVLongPressSpeedController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) AWERVLongPressSpeedViewModel *viewModel;

- (void)setHide:(BOOL)a0;
- (void)bindEvent;
- (BOOL)shouldResponseRecognizer:(id)a0;
- (BOOL)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end

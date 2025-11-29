@class UILabel;

@interface AWEMVChannelPlayerCardVideoTimeElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UILabel *totalTimeLabel;

- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (double)totalTime;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

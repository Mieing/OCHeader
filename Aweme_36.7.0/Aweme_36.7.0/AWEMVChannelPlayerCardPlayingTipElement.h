@class UILabel;

@interface AWEMVChannelPlayerCardPlayingTipElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UILabel *tipLabel;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

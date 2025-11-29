@class UIImageView, UILabel;

@interface AWEMVChannelPlayerCardDanmakuCountElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UIImageView *danmakuIcon;
@property (retain, nonatomic) UILabel *countLabel;

- (id)formateCount:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

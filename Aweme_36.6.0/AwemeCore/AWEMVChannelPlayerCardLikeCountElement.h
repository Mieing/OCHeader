@class UIImageView, UILabel;

@interface AWEMVChannelPlayerCardLikeCountElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeCountLabel;

- (void)bindObserver;
- (void)onAwemeDiggNotification:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

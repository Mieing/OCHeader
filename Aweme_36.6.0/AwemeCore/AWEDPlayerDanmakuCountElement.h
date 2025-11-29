@class UIImageView, UILabel;

@interface AWEDPlayerDanmakuCountElement : AWEDPlayerInteractionBaseElement

@property (retain, nonatomic) UIImageView *danmakuIcon;
@property (retain, nonatomic) UILabel *countLabel;

- (id)activateInfoWithData:(id)a0;
- (id)formateCount:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end

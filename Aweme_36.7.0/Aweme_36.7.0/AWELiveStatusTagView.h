@class UIImageView, UILabel, UIView;

@interface AWELiveStatusTagView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *splitLineView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *liveTipsLabel;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)initUIWithType:(long long)a0 nickName:(id)a1;
- (id)initWithType:(long long)a0 nickName:(id)a1;
- (void).cxx_destruct;
- (void)tapAction;

@end

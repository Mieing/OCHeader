@class NSString, UILabel, UIView, UIButton;

@interface AWEDanmakuShieldWordTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ deleteShieldWordButtonClick;

- (void)addCornerIfNeed;
- (void)handleCloseButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end

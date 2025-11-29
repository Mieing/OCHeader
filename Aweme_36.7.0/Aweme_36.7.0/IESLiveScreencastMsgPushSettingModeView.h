@class UIImageView, UILabel, UIButton;

@interface IESLiveScreencastMsgPushSettingModeView : UIView

@property (nonatomic) long long mode;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectButton;
@property (copy, nonatomic) id /* block */ selectButtonDidClick;

+ (id)titleWithMode:(long long)a0;
+ (id)imageWithMode:(long long)a0;

- (void)makeConstraints;
- (void)updateButtonSelected:(BOOL)a0;
- (void)buttonClicked:(id)a0;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

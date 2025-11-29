@class YYLabel, UIImageView, AFDSnackBarYYLabelBodyViewConfig;

@interface AFDSnackBarYYLabelBodyView : UIView

@property (retain, nonatomic) YYLabel *yyLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) AFDSnackBarYYLabelBodyViewConfig *config;

- (void)onRightImageTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
